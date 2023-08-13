#pragma once
#include "../../../../../../../pch.h"

class cGcCreaturePetTraits;

class cGcPetEggTraitModifierOverrideData
{
    static const unsigned __int64 muNameHash = 0xE14D5B0B53D91D7C;
    static const unsigned __int64 muTemplateHash = 0x11259BB40F6BA697;
    static const int miNumMembers = 5;

    TkID<128> mProductID;
    TkID<128> mSubstanceID;
    cGcCreaturePetTraits mTrait;
    bool mbIncreasesTrait;
    int miBaseValueOverride;

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
