#pragma once

#include "../../../../../../pch.h"
class cGcInventoryContainer;

class cGcMaintenanceContainer
{
    static const unsigned __int64 muNameHash = 5400354540728664519;
    static const unsigned __int64 muTemplateHash = 1077681670662284247;
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
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
