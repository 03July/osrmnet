#include "Stdafx.h"
#include "Storage.h" 
#include "EngineConfig.h"
#include "StorageConfig.h"
#include "OsrmException.h"
#include <msclr\marshal_cppstd.h>
#include "util\exception.hpp"
#include "storage\storage_config.hpp"

// *** Implementation of Storage to be able to use osrm-datastore in .Net for shared memory ***
// #include "storage\storage.hpp" 
// But this include generate the error: #error <mutex> is not supported when compiling with /clr or /clr:pure.
// It can be removed with the #include "util/log.hpp" excluded from the header "storage\shared_datatype.hpp"
// ***

/*

using namespace Osrmnet;

Storage::Storage(StorageConfig^ storageConfig) try : storage(new osrm::storage::Storage(*(storageConfig->InnerObject())))
{
}
catch (osrm::util::exception exception)
{
	throw gcnew OsrmException(gcnew System::String(exception.what()));
}

Storage::!Storage()
{
delete storage;
}

int Storage::Run(int maxWait)
{
	try
	{
		return storage->Run(maxWait);
	}
	catch (osrm::util::exception exception)
	{
		throw gcnew OsrmException(gcnew System::String(exception.what()));
	}
}

*/
