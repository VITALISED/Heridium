#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/gamestate/gcinventorycontainer.meta.h"

class cGcMaintenanceContainer
{
public:
    static const unsigned __int64 muNameHash = 0x4AF1E9D7AD4CC1C7;
    static const unsigned __int64 muTemplateHash = 0xEF4B1C508C663D7;
    static const int miNumMembers = 7;

    cGcInventoryContainer mInventoryContainer;
    unsigned __int64 mui64LastUpdateTimestamp;
    unsigned __int64 mui64LastCompletedTimestamp;
    unsigned __int64 mui64LastBrokenTimestamp;
    cTkDynamicArray<float> maDamageTimers;
    cTkDynamicArray<float> maAmountAccumulators;
    unsigned __int16 muiFlags;

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
