#pragma once

#include "OsrmFwdDecl.h"

/** See comment in Storage.cpp **/

/*

namespace Osrmnet
{
ref class StorageConfig;

public ref class Storage
{
private:
osrm::storage::Storage* const storage;

public:
int Run(int maxWait);

Storage(StorageConfig^);
~Storage()
{
this->!Storage();
System::GC::SuppressFinalize(this);
}
!Storage();
};
}

*/