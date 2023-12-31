#pragma once
#include "../../../../../../pch.h"

#include "../../../../../../metadata/source/metadata/simulation/ecosystem/creatures/data/gccreaturepettraits.meta.h"

class cGcPetBehaviourTraitModifier
{
public:
    static const unsigned __int64 muNameHash = 0xE41D8EA9BE5AA4F8;
    static const unsigned __int64 muTemplateHash = 0xF83BC00DCA9A3E83;
    static const int miNumMembers = 7;

    cGcCreaturePetTraits mTrait;
    float mfTraitMin;
    float mfTraitMax;
    float mfWeightModifierMin;
    float mfWeightModifierMax;
    float mfCooldownModifierMin;
    float mfCooldownModifierMax;

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
