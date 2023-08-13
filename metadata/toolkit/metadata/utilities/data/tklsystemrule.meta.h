#pragma once

#include "../../../../../../../pch.h"
enum eRuleType
{
    ERuleType_Default = 0,
    ERuleType_BaseRule = 1,
};

class cTkLSystemRule
{
    static const unsigned __int64 muNameHash = 16185674768415277701;
    static const unsigned __int64 muTemplateHash = 17236025203258453875;
    static const int miNumMembers = 4;

    cTkFixedString<32,char> macName;
    cTkFixedString<128,char> macModel;
    cTkDynamicArray<cTkLSystemInnerRule> maRules;
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
