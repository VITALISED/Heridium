#pragma once
#include "../../../../pch.h"

class cGcRewardSystemSpecificProductFromList
{
public:
    static const unsigned __int64 muNameHash = 0xA84D807B09AAC1E3;
    static const unsigned __int64 muTemplateHash = 0xE23F1012DD607C65;
    static const int miNumMembers = 4;

    cTkDynamicArray<TkID<128> > maProductList;
    int miAmountMin;
    int miAmountMax;
    bool mbForceSpecialMessage;

    static bool ClassPointerCompare(const cTkClassPointer* lPtr, const cTkClassPointer *lOtherPtr);
    static void ClassPointerCopy(cTkClassPointer* lDest, const cTkClassPointer *lSource);
    static cTkClassPointer* ClassPointerCreate(cTkClassPointer* result);
    static void ClassPointerCreateDefault(cTkClassPointer* lPtr, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerDestroy(cTkClassPointer* lPtr);
    static void ClassPointerFix(cTkClassPointer* lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
