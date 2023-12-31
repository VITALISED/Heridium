#pragma once
#include "../../../../../pch.h"

class cGcInventoryValueData
{
public:
    static const unsigned __int64 muNameHash = 0x9118F575B23083D9;
    static const unsigned __int64 muTemplateHash = 0xA08FF46B3C4DECBB;
    static const int miNumMembers = 7;

    float mfBaseMinValue;
    float mfBaseMaxValue;
    float mfExponentialValue;
    float mfBaseCostPerSlot;
    float mfSlotExponentialValue;
    float mfValueToCost;
    float mfSlotsPerLevel;

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
