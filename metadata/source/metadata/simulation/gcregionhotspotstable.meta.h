#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/simulation/gcregionhotspotdata.meta.h"
#include "../../../../metadata/source/metadata/simulation/gcregionhotspotbiomegases.meta.h"
#include "../../../../metadata/source/metadata/simulation/gcregionhotspotsubstance.meta.h"

class cGcRegionHotspotsTable
{
public:
    static const unsigned __int64 muNameHash = 0x7F0D775900CDB2FD;
    static const unsigned __int64 muTemplateHash = 0x1EEB6E34193A8D63;
    static const int miNumMembers = 8;

    float mfRegionHotspotsPoleSpacing;
    float mfRegionHotspotsPerPoleMin;
    float mfRegionHotspotsPerPoleMax;
    float mfRegionHotspotsMinSameCategorySpacing;
    float mfRegionHotspotsMaxDifferentCategoryOverlap;
    cTkFixedArray<cGcRegionHotspotData, 6> maRegionHotspots;
    cTkFixedArray<cGcRegionHotspotBiomeGases, 16> maRegionHotspotBiomeGases;
    cTkDynamicArray<cGcRegionHotspotSubstance> maRegionHotspotSubstances;

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
