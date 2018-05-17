#pragma once

#include "OsrmFwdDecl.h"
#include <msclr\marshal_cppstd.h>

namespace Osrmnet
{
	public ref class StorageConfig
	{
	public:
		bool IsValid();
		System::String^ GetPath(System::String^ fileName);
		property System::String^ BasePath { System::String^ get();  void set(System::String^); }
		StorageConfig(System::String^);
		~StorageConfig();
		!StorageConfig();

	private:
		osrm::storage::StorageConfig* const storageConfig;
	internal:
		osrm::storage::StorageConfig* const InnerObject()
		{
			return storageConfig;
		}
	};
}
