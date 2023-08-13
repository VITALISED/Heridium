#pragma once

#include "../../../../../../../../pch.h"
enum ePetBehaviourValidity
{
    EPetBehaviourValidity_Everywhere = 0,
    EPetBehaviourValidity_OnPlanet = 1,
};

class cGcPetBehaviourData
{
    static const unsigned __int64 muNameHash = 3500202891003720588;
    static const unsigned __int64 muTemplateHash = 2909064819089636498;
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
    cTkFixedArray<float> maMoodModifyOnComplete;
    TkID<256> mLabelText;

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
