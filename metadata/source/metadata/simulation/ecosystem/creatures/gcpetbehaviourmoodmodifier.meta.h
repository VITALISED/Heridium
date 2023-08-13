#pragma once
#include "pch.h"

class cGcCreaturePetMood;

class cGcPetBehaviourMoodModifier
{
public:
    static const unsigned __int64 muNameHash = 0x7665E5534F420118;
    static const unsigned __int64 muTemplateHash = 0x8D3E77D7F2B1C8B2;
    static const int miNumMembers = 7;

    cGcCreaturePetMood mMood;
    float mfMoodMin;
    float mfMoodMax;
    float mfWeightModifierMin;
    float mfWeightModifierMax;
    float mfCooldownModifierMin;
    float mfCooldownModifierMax;

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
