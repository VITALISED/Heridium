#pragma once
#include "pch.h"

class cTkVoxelGeneratorRegionData
{
public:
    static const unsigned __int64 muNameHash = 0xA1EC10F083963380;
    static const unsigned __int64 muTemplateHash = 0x18388706836A5878;
    static const int miNumMembers = 11;

    float mfPlanetRadius;
    float mfVoronoiPointDivisions;
    int miVoronoiSectorSeed;
    int miVoronoiPointSeed;
    cTkDynamicArray<cTkNoiseFlattenPoint1> maFlattenTerrainPoints;
    cTkDynamicArray<float1> maFlattenTypeChances;
    int miWaypointIndex;
    int miLandingPadIndex;
    float mfAddShelterChance;
    cTkFixedArray<int, 3> maShelterIndices;
    int miNumShelters;

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
