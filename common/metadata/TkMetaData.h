#pragma once

#include "../../pch.h"
#include "TkClassPointer.h"
#include "../utilities/TkLinearMemoryPool.h"
#include "TkMetaDataClass.h"

class cTkMetaDataFunctionLookup
{
public:
	const cTkMetaDataClass* mpClassMetadata;
	void(*mCreateDefaultFunction)(cTkClassPointer*, cTkLinearMemoryPool*);
	void(*mRenderFunction)(cTkClassPointer*);
	void(*mFixingFunction)(cTkClassPointer*, bool, unsigned __int64);
	void(*mValidateDataFunction)(cTkClassPointer*);
	bool(*mEqualsFunction)(const cTkClassPointer*, const cTkClassPointer*);
	void(*mCopyFunction)(cTkClassPointer*, const cTkClassPointer*);
	cTkClassPointer* (*mCreatePtrFunction)(cTkClassPointer* result);
	unsigned __int64(*mHashFunction)(const cTkClassPointer*, unsigned __int64, bool);
	void(*mDestroyFunction)(cTkClassPointer*);
};

class cTkMetaData
{
public:
	typedef cTkMetaDataFunctionLookup* (*GetLookup)(unsigned __int64 luiNameHash);
};