#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/source/metadata/simulation/environment/gcbuildingspawnslot.meta.h"
#include "../../../../../metadata/source/metadata/simulation/environment/gcbuildingspawndata.meta.h"
#include "../../../../../metadata/source/metadata/simulation/environment/gcbuildingoverridedata.meta.h"

class cGcPlanetBuildingData
{
public:
    static const unsigned __int64 muNameHash = 0xF6213EDD899A8CAE;
    static const unsigned __int64 muTemplateHash = 0x9E12FCC020E66CD3;
    static const int miNumMembers = 10;

    cTkDynamicArray<cGcBuildingSpawnSlot> maBuildingSlots;
    cTkDynamicArray<cGcBuildingSpawnData> maBuildings;
    cTkDynamicArray<cGcBuildingOverrideData> maOverrideBuildings;
    float mfSpacing;
    float mfPlanetRadius;
    float mfVoronoiPointDivisions;
    int miVoronoiSectorSeed;
    int miVoronoiPointSeed;
    bool mbInitialBuildingsPlaced;
    bool mbIsPrime;

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
