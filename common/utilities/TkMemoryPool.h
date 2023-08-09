#pragma once

#include "../../pch.h"
#include "TkArray.h"

class cTkMemoryPool
{
public:
	/*cTkMemoryPool_vtbl8*/void* __vftable /*VFT*/;
	int miType;
	int miAlignment;
	unsigned __int64 muTotalSize;
	cTkBitArray<unsigned int, 32> mxErrors;
};