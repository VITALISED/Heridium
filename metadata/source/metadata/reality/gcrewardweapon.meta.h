#pragma once
#include "../../../../../../pch.h"

class cGcRewardWeapon
{
    static const unsigned __int64 muNameHash = 0xDF91F2B5F746FB61;
    static const unsigned __int64 muTemplateHash = 0x851F4BA80F69B14B;
    static const int miNumMembers = 8;

    int miItemLevel;
    bool mbMarkInteractionComplete;
    bool mbUsePlanetSeed;
    bool mbForceFixed;
    bool mbRequeueInteraction;
    bool mbReinteractOnDecline;
    bool mbOnlyUseNextInteractionOnSuccess;
    float mfSecretPoolChance;

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
