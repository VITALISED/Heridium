#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/reality/gcinventorylayoutgenerationbounds.meta.h"
#include "../../../../metadata/source/metadata/gamestate/gcinventoryindex.meta.h"

class cGcInventoryLayoutGenerationDataEntry
{
public:
    static const unsigned __int64 muNameHash = 0x15DCF5F4B3591EDB;
    static const unsigned __int64 muTemplateHash = 0xF4143974B3CF4098;
    static const int miNumMembers = 10;

    int miMinSlots;
    int miMaxSlots;
    int miMinTechSlots;
    int miMaxTechSlots;
    int miMinCargoSlots;
    int miMaxCargoSlots;
    cGcInventoryLayoutGenerationBounds mBounds;
    cGcInventoryLayoutGenerationBounds mTechBounds;
    int miMaxNumSpecialTechSlots;
    cGcInventoryIndex mSpecialTechSlotMaxIndex;

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
