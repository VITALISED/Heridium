#pragma once

#include "../../../../../../../pch.h"
enum eMergeProbabilityOptions
{
    EMergeProbabilityOptions_Balance = 0,
    EMergeProbabilityOptions_Prioritize = 1,
    EMergeProbabilityOptions_Replace = 2,
};

class cTkLSystemInnerRule
{
    static const unsigned __int64 muNameHash = 5731790378558398512;
    static const unsigned __int64 muTemplateHash = 9509613472730688124;
    static const int miNumMembers = 3;

    cTkFixedString<32,char> macLocatorType;
    eMergeProbabilityOptions meMergeProbabilityOptions;
    cTkDynamicArray<cTkLSystemLocatorEntry> maEntries;

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