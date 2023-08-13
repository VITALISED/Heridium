#pragma once

#include "../../../../../../../../../pch.h"
class cGcCreatureRidingPartModifier
{
    static const unsigned __int64 muNameHash = 13376699545988660583;
    static const unsigned __int64 muTemplateHash = 7399707471901541151;
    static const int miNumMembers = 16;

    TkID<256> mPartName;
    cTkFixedString<256,char> macJointName;
    float mfMinScale;
    float mfMaxScale;
    cTkFixedString<256,char> macAdditionalScaleJoint;
    bool mbBreakIfNotSelected;
    bool mbRelativeOffset;
    cTkVector mOffset;
    cTkVector mRotationOffset;
    cTkVector mVROffset;
    float mfHeadCounterRotation;
    float mfLegSpreadOffset;
    bool mbOverrideAnims;
    TkID<128> mIdleRidingAnim;
    TkID<128> mDefaultRidingAnim;
    cTkDynamicArray<cGcCreatureRidingAnimation> maRidingAnims;

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
