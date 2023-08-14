#pragma once
#include "../../../../../../pch.h"

enum ePetBehaviourValidity
{
    EPetBehaviourValidity_Everywhere = 0,
    EPetBehaviourValidity_OnPlanet = 1,
};
#include "../../../../../../metadata/source/metadata/simulation/ecosystem/creatures/gcpetfollowupbehaviour.meta.h"
#include "../../../../../../metadata/source/metadata/simulation/ecosystem/creatures/gcpetbehaviourtraitmodifier.meta.h"
#include "../../../../../../metadata/source/metadata/simulation/ecosystem/creatures/gcpetbehaviourmoodmodifier.meta.h"

class cGcPetBehaviourData
{
public:
    static const unsigned __int64 muNameHash = 0x309337FC0812738C;
    static const unsigned __int64 muTemplateHash = 0x285F130A426C7C92;
    static const int miNumMembers = 15;

    bool mbReactiveBehaviour;
    bool mbUsefulBehaviour;
    float mfWeight;
    float mfMinPerformTime;
    float mfMaxPerformTime;
    float mfCooldownTime;
    float mfChatChance;
    float mfApproachPlayerDist;
    float mfSearchDist;
    ePetBehaviourValidity mePetBehaviourValidity;
    cTkDynamicArray<cGcPetFollowUpBehaviour> maFollowUpBehaviours;
    cTkDynamicArray<cGcPetBehaviourTraitModifier> maTraitBehaviourModifiers;
    cTkDynamicArray<cGcPetBehaviourMoodModifier> maMoodBehaviourModifiers;
    cTkFixedArray<float, 2> maMoodModifyOnComplete;
    TkID<256> mLabelText;

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
