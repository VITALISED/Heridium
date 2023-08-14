#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/reality/gcinventoryspecialslottype.meta.h"
#include "../../../../metadata/source/metadata/gamestate/gcinventoryindex.meta.h"

class cGcInventorySpecialSlot
{
public:
    static const unsigned __int64 muNameHash = 0xB2EA0121EEE71A2B;
    static const unsigned __int64 muTemplateHash = 0x69322AB0FB28C055;
    static const int miNumMembers = 2;

    cGcInventorySpecialSlotType mType;
    cGcInventoryIndex mIndex;

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
