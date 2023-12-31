#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/source/metadata/utilities/data/gcresourceelement.meta.h"
#include "../../../../../metadata/source/metadata/simulation/environment/gcbuildingclassification.meta.h"
#include "../../../../../metadata/toolkit/metadata/voxel/generator/tknoiseflattenoptions.meta.h"

class cGcBuildingSpawnData
{
public:
    static const unsigned __int64 muNameHash = 0x2FE28DE7841506AF;
    static const unsigned __int64 muTemplateHash = 0xFFDC604437C8CD16;
    static const int miNumMembers = 25;

    float mfDensity;
    cGcResourceElement mResource;
    int miLSystemID;
    int miWFCModuleSet;
    int miWFCBuildingPreset;
    bool mbAutoCollision;
    cTkSeed mSeed;
    cGcBuildingClassification mClassification;
    cTkFixedArray<int, 8> maClusterLayouts;
    int miClusterLayoutCount;
    float mfClusterSpacing;
    cTkNoiseFlattenOptions mFlattenType;
    bool mbGivesShelter;
    bool mbAlignToNormal;
    bool mbLowerIntoGround;
    float mfScale;
    float mfMaxXZRotation;
    float mfRadius;
    float mfMinHeight;
    float mfMaxHeight;
    int miInstanceID;
    cTkVector3 mAABBMin;
    cTkVector3 mAABBMax;
    bool mbBuildingSizeCalculated;
    bool mbIgnoreParticlesAABB;

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
