#pragma once
#include "../../../../../../pch.h"

class cGcRegionHotspotsTable
{
    static const unsigned __int64 muNameHash = 0x7F0D775900CDB2FD;
    static const unsigned __int64 muTemplateHash = 0x1EEB6E34193A8D63;
    static const int miNumMembers = 8;

    float mfRegionHotspotsPoleSpacing;
    float mfRegionHotspotsPerPoleMin;
    float mfRegionHotspotsPerPoleMax;
    float mfRegionHotspotsMinSameCategorySpacing;
    float mfRegionHotspotsMaxDifferentCategoryOverlap;
    cTkFixedArray<cGcRegionHotspotData> maRegionHotspots;
    cTkFixedArray<cGcRegionHotspotBiomeGases> maRegionHotspotBiomeGases;
    cTkDynamicArray<cGcRegionHotspotSubstance> maRegionHotspotSubstances;

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
