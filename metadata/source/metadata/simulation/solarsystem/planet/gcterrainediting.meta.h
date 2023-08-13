#pragma once

#include "../../../../../../../../pch.h"
class cGcTerrainEditing
{
    static const unsigned __int64 muNameHash = 5081979004926409196;
    static const unsigned __int64 muTemplateHash = 614630370658976686;
    static const int miNumMembers = 30;

    float mfEditPlaneMaxAdditiveOffsetFactor;
    float mfEditPlaneMinAdditiveOffsetFactor;
    float mfEditPlaneMaxSubtractiveOffsetFactor;
    float mfEditPlaneMinSubtractiveOffsetFactor;
    float mfTerrainEditBeamMaxRange;
    float mfTerrainEditBeamSpherecastRadius;
    float mfTerrainEditBeamAddInterpolationStepFactor;
    float mfTerrainEditBeamSubtractInterpolationStepFactor;
    float mfTerrainBlocksSearchRadiusMultiplier;
    float mfRegionMapSearchRadiusMultiplier;
    float mfMinimumSubstancePresence;
    float mfRegionEditAreaMultiplier;
    float mfDensityBlendDistanceMultiplier;
    float mfTerrainEditBaseDistanceTolerance;
    float mfTerrainUndoBaseDistanceTolerance;
    float mfUndoEditToleranceFactor;
    float mfUndoBaseEditEffectiveScale;
    float mfTerrainEditsNormalCostFactor;
    float mfTerrainEditsSurvivalCostFactor;
    float mfVoxelsDeletedAffectCostFactor;
    bool mbEditGunBeamEnabled;
    bool mbEditGunParticlesEnabled;
    bool mbSubtractGunBeamEnabled;
    bool mbSubtractGunParticlesEnabled;
    cTkFixedArray<float> maEditSizes;
    cTkFixedArray<float> maSubtractSizes;
    cTkFixedArray<float> maBaseEditSizes;
    cTkFixedArray<float> maUndoEditSizes;
    cTkFixedArray<float> maFlatteningSizes;
    float mfEditEffectScale;

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