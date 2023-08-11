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
	typedef void(*Register)(
		const cTkMetaDataClass* lpClassMetadata,
		void(__fastcall* lDefaultFunction)(cTkClassPointer*, cTkLinearMemoryPool*),
		void(__fastcall* lFixingFunction)(cTkClassPointer*, bool, unsigned __int64),
		void(__fastcall* lValidateFunction)(cTkClassPointer*),
		void(__fastcall* lRenderFunction)(cTkClassPointer*),
		bool(__fastcall* lEqualsFunction)(const cTkClassPointer*, const cTkClassPointer*),
		void(__fastcall* lCopyFunction)(cTkClassPointer*, const cTkClassPointer*),
		cTkClassPointer* (__fastcall* lCreateFunction)(cTkClassPointer* result),
		unsigned __int64(__fastcall* lHashFunction)(const cTkClassPointer*, unsigned __int64, bool),
		void(__fastcall* lDestroyFunction)(cTkClassPointer*));
};