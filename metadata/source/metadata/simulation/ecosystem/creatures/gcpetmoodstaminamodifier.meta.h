#pragma once
#include "../../../../../../pch.h"

#include "../../../../../../metadata/source/metadata/simulation/ecosystem/creatures/data/gccreaturepetmood.meta.h"

class cGcPetMoodStaminaModifier
{
public:
    static const unsigned __int64 muNameHash = 0xE63B46A8CA0EF245;
    static const unsigned __int64 muTemplateHash = 0x1DA5865B8E6F16CB;
    static const int miNumMembers = 7;

    cGcCreaturePetMood mMood;
    float mfMoodMin;
    float mfMoodMax;
    float mfStaminaDrainModifierMin;
    float mfStaminaDrainModifierMax;
    float mfStaminaRechargeModifierMin;
    float mfStaminaRechargeModifierMax;

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
