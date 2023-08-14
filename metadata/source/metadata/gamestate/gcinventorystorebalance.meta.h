#pragma once
#include "../../../../pch.h"

class cGcInventoryStoreBalance
{
public:
    static const unsigned __int64 muNameHash = 0x950617F05949472B;
    static const unsigned __int64 muTemplateHash = 0xEF6181D1BC4CEE7B;
    static const int miNumMembers = 5;

    int miPlayerPersonalInventoryTechWidth;
    int miPlayerPersonalInventoryTechHeight;
    int miPlayerPersonalInventoryCargoWidth;
    int miPlayerPersonalInventoryCargoHeight;
    float mfDeconstructRefundPercentage;

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
