#pragma once
#include "pch.h"

enum eModifyIntType
{
    EModifyIntType_SetValue = 0,
    EModifyIntType_IncrementValue = 1,
};

class cGcBlackboardIntModifyData
{
public:
    static const unsigned __int64 muNameHash = 0x16AA46E72671EDE7;
    static const unsigned __int64 muTemplateHash = 0xAAF0F26B8FB365A8;
    static const int miNumMembers = 3;

    TkID<128> mKey;
    int miValue;
    eModifyIntType meModifyIntType;

    static bool ClassPointerCompare(const cTkClassPointer* lPtr, const cTkClassPointer *lOtherPtr);
    static void ClassPointerCopy(cTkClassPointer* lDest, const cTkClassPointer *lSource);
    static cTkClassPointer* ClassPointerCreate(cTkClassPointer* result);
    static void ClassPointerCreateDefault(cTkClassPointer* lPtr, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerDestroy(cTkClassPointer* lPtr);
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
