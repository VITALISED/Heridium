#pragma once
#include "../../../../../../pch.h"

#include "../../../../../../metadata/source/metadata/simulation/solarsystem/planet/gcplanetwatercolourdata.meta.h"

class cGcWaterColourSettingList
{
public:
    static const unsigned __int64 muNameHash = 0xB2E60FCA3C5550F9;
    static const unsigned __int64 muTemplateHash = 0x393AEE313EAF1227;
    static const int miNumMembers = 1;

    cTkDynamicArray<cGcPlanetWaterColourData> maSettings;

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
