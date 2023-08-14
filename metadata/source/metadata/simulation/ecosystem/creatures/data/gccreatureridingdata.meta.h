#pragma once
#include "../../../../../../../pch.h"

#include "../../../../../../../metadata/source/metadata/simulation/ecosystem/creatures/data/gccreatureridingpartmodifier.meta.h"
#include "../../../../../../../metadata/source/metadata/simulation/ecosystem/creatures/data/gccreatureridinganimation.meta.h"

class cGcCreatureRidingData
{
public:
    static const unsigned __int64 muNameHash = 0xCBC8926C6C9D9A51;
    static const unsigned __int64 muTemplateHash = 0xAEDEBE610D3F2531;
    static const int miNumMembers = 16;

    cTkFixedString<256,char> macJointName;
    cTkFixedString<256,char> macAdditionalScaleJoint;
    cTkVector3 mOffset;
    cTkVector3 mRotationOffset;
    cTkVector3 mVROffset;
    float mfHeadCounterRotation;
    float mfUprightStrength;
    bool mbLegSpread;
    float mfScaleForNeutralLegSpread;
    float mfScaleForMinLegSpread;
    float mfScaleForMaxLegSpread;
    bool mbRequiresMatchingPartModifier;
    cTkDynamicArray<cGcCreatureRidingPartModifier> maPartModifiers;
    TkID<128> mIdleRidingAnim;
    TkID<128> mDefaultRidingAnim;
    cTkDynamicArray<cGcCreatureRidingAnimation> maRidingAnims;

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
