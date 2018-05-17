#include "stdafx.h"
#include "StorageConfig.h"
#include "storage\storage_config.hpp"

using namespace Osrmnet;

StorageConfig::StorageConfig(System::String^ basePath) : storageConfig(new osrm::storage::StorageConfig( msclr::interop::marshal_as<std::string>(basePath) ))
{
}

StorageConfig::~StorageConfig()
{
	this->!StorageConfig();
	System::GC::SuppressFinalize(this);
}
StorageConfig::!StorageConfig()
{
	delete storageConfig;
}

System::String^ StorageConfig::GetPath(System::String^ fileName)
{
	return gcnew System::String(storageConfig->GetPath( msclr::interop::marshal_as<std::string>(fileName) ).c_str());
}

System::String^ StorageConfig::BasePath::get()
{
	return { gcnew System::String(storageConfig->base_path.c_str()) };
}

void StorageConfig::BasePath::set(System::String^ value)
{
	storageConfig->base_path = msclr::interop::marshal_as<std::string>(value);
}

bool StorageConfig::IsValid()
{
	return storageConfig->IsValid();
}