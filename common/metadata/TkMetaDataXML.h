#pragma once

#include "../utilities/TkString.h"
#include "TkClassPointer.h"
#include "../xml/XMLNode.h"
#include "../utilities/TkLinearMemoryPool.h"

class cTkMetaDataXMLFunctionLookup
{
public:
	cTkFixedString<64, char> mName;
	void(__fastcall* mWriteFunction)(const cTkClassPointer*, XMLNode*, bool);
	void(__fastcall* mReadFunction)(cTkClassPointer*, XMLNode*, cTkLinearMemoryPool*);
	bool(__fastcall* mSaveFunction)(const cTkClassPointer*, const char*);
};

class cTkMetaDataXML
{
public:
	typedef cTkMetaDataXMLFunctionLookup* (*GetLookup)(const char* lpacName);
};