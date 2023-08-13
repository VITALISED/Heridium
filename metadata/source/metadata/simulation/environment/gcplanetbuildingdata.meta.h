#pragma once

#include "../../../../../../../pch.h"
class cGcPlanetBuildingData
{
    static const unsigned __int64 muNameHash = 17735525928779025582;
    static const unsigned __int64 muTemplateHash = 11390444309689298131;
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
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
