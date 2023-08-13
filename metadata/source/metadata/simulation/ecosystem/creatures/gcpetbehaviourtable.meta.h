#pragma once
#include "pch.h"

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
    cTkDynamicArray<cGcPetTraitStaminaModifier1> maTraitStaminaModifiers;
    cTkDynamicArray<cGcPetMoodStaminaModifier1> maMoodStaminaModifiers;
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
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
