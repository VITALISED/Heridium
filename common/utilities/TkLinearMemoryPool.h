#pragma once

#include "../../pch.h"
#include "TkMemoryPool.h"

class cTkLinearMemoryPool : public cTkMemoryPool
{
public:
	void* mpAllocAddress;
	unsigned __int64 miStartAddress;
	unsigned __int64 miEndVirtualAddress;
	unsigned __int64 miEndMappedAddress;
	unsigned __int64 miNextAddress;
	void* mpLastAllocation;
	__int64 miHighWater;
	unsigned __int64 miUserData;
	bool mbCreated;
	bool mbVirtualBacked;
};