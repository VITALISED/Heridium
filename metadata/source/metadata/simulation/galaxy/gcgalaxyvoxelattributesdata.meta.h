#pragma once
#include "../../../../../../../pch.h"

class cGcGalaxyVoxelAttributesData
{
    static const unsigned __int64 muNameHash = 0x967BB69D82846BE5;
    static const unsigned __int64 muTemplateHash = 0xF2B85C926A79352B;
    static const int miNumMembers = 11;

    bool mbInsideGoalGap;
    float mfUnitDistanceFromGoalEdge;
    float mfRegionColourValue;
    cTkVector2 mTransitPopulationDistanceRange;
    float mfTransitPopulationPerpDistance;
    int miGuideStarMinimumCount;
    int miGuideStarRenegadeCount;
    int miBlackholeCount;
    int miAtlasStationCount;
    cTkFixedArray<int> maBlackholeIndices;
    cTkFixedArray<int> maAtlasStationIndices;

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
