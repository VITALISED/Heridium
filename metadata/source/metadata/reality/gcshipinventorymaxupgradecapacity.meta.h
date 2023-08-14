#pragma once
#include "../../../../pch.h"

class cGcShipInventoryMaxUpgradeCapacity
{
public:
    static const unsigned __int64 muNameHash = 0xC51C8A0A49F892DC;
    static const unsigned __int64 muTemplateHash = 0xCC46D1E97F0D733C;
    static const int miNumMembers = 3;

    cTkFixedArray<int, 4> maMaxInventoryCapacity;
    cTkFixedArray<int, 4> maMaxTechInventoryCapacity;
    cTkFixedArray<int, 4> maMaxCargoInventoryCapacity;

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
