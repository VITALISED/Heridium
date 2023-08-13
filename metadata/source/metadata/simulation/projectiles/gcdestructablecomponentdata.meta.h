#pragma once

#include "../../../../../../../pch.h"
class cGcStatsEnum;
class cTkModelResource;

class cGcDestructableComponentData
{
    static const unsigned __int64 muNameHash = 16306194465406989501;
    static const unsigned __int64 muTemplateHash = 119174192516878704;
    static const int miNumMembers = 43;

    TkID<128> mExplosion;
    float mfExplosionScale;
    bool mbExplosionScaleToBounds;
    bool mbOnlyExplodeSelf;
    TkID<128> mVehicleDestroyEffect;
    TkID<128> mTriggerAction;
    int miIncreaseWanted;
    bool mbIncreaseFiendWanted;
    float mfIncreaseFiendWantedChance;
    bool mbNotifyEncounter;
    TkID<128> mLootReward;
    int miLootRewardAmountMin;
    int miLootRewardAmountMax;
    bool mbCanDestroyFromStoredInteraction;
    cTkDynamicArray<cGcSubstanceAmount> maGivesSubstances;
    cGcStatsEnum mStatToTrack;
    TkID<128> mGivesReward;
    TkID<128> mPirateSystemAltReward;
    bool mbRewardIfDestroyedByOther;
    bool mbHideReward;
    TkID<256> mOverrideRewardLoc;
    cTkDynamicArray<cGcRewardMissionOverride> maRewardOverrideTable;
    bool mbActivateLocatorsFromRarity;
    cTkFixedArray<TkID<128> > maRarityLocators;
    bool mbUseSystemColorsForTexture;
    bool mbRemoveModel;
    bool mbHideModel;
    cTkModelResource mDestroyedModel;
    bool mbDestroyedModelUsesScale;
    bool mbDestroyedModelCollidesWithEverything;
    float mfDestroyForce;
    float mfDestroyForceRadius;
    TkID<128> mDestroyEffect;
    bool mbDestroyEffectOnSurface;
    TkID<128> mDestroyEffectPoint;
    float mfDestroyEffectTime;
    bool mbDestroyEffectMatrices;
    TkID<128> mAreaDamage;
    bool mbShowInteract;
    bool mbHideInteractWhenAllArmourDestroyed;
    float mfShowInteractRange;
    bool mbGrenadeSingleHit;
    cTkDynamicArray<cGcLootProbability> maLootItems;

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