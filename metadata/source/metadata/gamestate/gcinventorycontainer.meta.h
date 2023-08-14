#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/gamestate/gcinventoryelement.meta.h"
#include "../../../../metadata/source/metadata/gamestate/gcinventoryindex.meta.h"
#include "../../../../metadata/source/metadata/reality/gcinventoryclass.meta.h"
#include "../../../../metadata/source/metadata/reality/gcinventorystacksizegroup.meta.h"
#include "../../../../metadata/source/metadata/reality/gcinventorybasestatentry.meta.h"
#include "../../../../metadata/source/metadata/gamestate/gcinventoryspecialslot.meta.h"

class cGcInventoryContainer
{
public:
    static const unsigned __int64 muNameHash = 0xAF875892F81EDE11;
    static const unsigned __int64 muTemplateHash = 0x6B0445D97609452D;
    static const int miNumMembers = 11;

    cTkDynamicArray<cGcInventoryElement> maSlots;
    cTkDynamicArray<cGcInventoryIndex> maValidSlotIndices;
    cGcInventoryClass mClass;
    cGcInventoryStackSizeGroup mStackSizeGroup;
    cTkDynamicArray<cGcInventoryBaseStatEntry> maBaseStatValues;
    cTkDynamicArray<cGcInventorySpecialSlot> maSpecialSlots;
    int miWidth;
    int miHeight;
    bool mbIsCool;
    cTkFixedString<256,char> macName;
    int miVersion;

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
