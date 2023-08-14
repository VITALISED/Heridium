#pragma once
#include "../../../../../../pch.h"

#include "../../../../../../metadata/source/metadata/simulation/ecosystem/creatures/gcpetbehaviourdata.meta.h"
#include "../../../../../../metadata/source/metadata/simulation/ecosystem/creatures/gcpettraitmoodmodifierlist.meta.h"
#include "../../../../../../metadata/source/metadata/simulation/ecosystem/creatures/gcpetactionmoodmodifier.meta.h"
#include "../../../../../../metadata/source/metadata/simulation/ecosystem/creatures/data/gccreaturepettraitranges.meta.h"
#include "../../../../../../metadata/source/metadata/simulation/ecosystem/creatures/gcpettraitstaminamodifier.meta.h"
#include "../../../../../../metadata/source/metadata/simulation/ecosystem/creatures/gcpetmoodstaminamodifier.meta.h"

class cGcPetBehaviourTable
{
public:
    static const unsigned __int64 muNameHash = 0x39BD1ED2FC8D7524;
    static const unsigned __int64 muTemplateHash = 0x78F621A5B62DEA07;
    static const int miNumMembers = 18;

    cTkFixedArray<cGcPetBehaviourData, 28> maBehaviours;
    float mfGlobalCooldownModifier;
    float mfUsefulBehaviourLinkedCooldownAmount;
    float mfPlayerActivityIncreaseTime;
    float mfPlayerActivityDecreaseTime;
    cTkFixedArray<float, 2> maMoodIncreaseTime;
    cTkFixedArray<cGcPetTraitMoodModifierList, 3> maTraitMoodModifiers;
    cTkFixedArray<cGcPetActionMoodModifier, 9> maRewardMoodModifier;
    cTkFixedArray<cGcCreaturePetTraitRanges, 11> maTraitRanges;
    cTkFixedArray<float, 2> maMoodValuesOnAdopt;
    cTkFixedArray<float, 2> maMoodValuesOnHatch;
    cTkDynamicArray<cGcPetTraitStaminaModifier> maTraitStaminaModifiers;
    cTkDynamicArray<cGcPetMoodStaminaModifier> maMoodStaminaModifiers;
    float mfAccessoryGyroFollowMotionStrength;
    float mfAccessoryGyroToNeutralStrength;
    float mfAccessoryGyroDamping;
    float mfAccessoryGyroStrength;
    bool mbAccessoryGyroActive;

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
