#pragma once
#include "pch.h"

enum eRuleType
{
    ERuleType_Default = 0,
    ERuleType_BaseRule = 1,
};

class cTkLSystemRule
{
public:
    static const unsigned __int64 muNameHash = 0xE09F11724D654285;
    static const unsigned __int64 muTemplateHash = 0xEF32A99A1BE66F73;
    static const int miNumMembers = 4;

    cTkFixedString<32,char> macName;
    cTkFixedString<128,char> macModel;
    cTkDynamicArray<cTkLSystemInnerRule1> maRules;
    eRuleType meRuleType;

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
