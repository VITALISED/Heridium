#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/reality/gcinventorylayoutgenerationdataentry.meta.h"

class cGcInventoryLayoutGenerationData
{
public:
    static const unsigned __int64 muNameHash = 0x7AA76AD6E14A0C29;
    static const unsigned __int64 muTemplateHash = 0xB88CD25A12DE1832;
    static const int miNumMembers = 1;

    cTkFixedArray<cGcInventoryLayoutGenerationDataEntry, 37> maGenerationDataPerSizeType;

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
