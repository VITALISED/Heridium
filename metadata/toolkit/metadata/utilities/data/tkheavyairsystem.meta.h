#pragma once
#include "../../../../../../../pch.h"

class cTkHeavyAirSystem
{
    static const unsigned __int64 muNameHash = 0x9564BC3EDB74BBA1;
    static const unsigned __int64 muTemplateHash = 0x2BAB61256BF5B670;
    static const int miNumMembers = 12;

    cTkFixedString<128,char> macMaterial;
    cTkVector mMajorDirection;
    cTkVector mScaleRange;
    cTkVector mRotationSpeedRange;
    cTkVector mFadeSpeedRange;
    cTkVector mTwinkleRange;
    cTkVector mAmplitudeMin;
    cTkVector mAmplitudeMax;
    cTkColour mColour1;
    float mfColour1Alpha;
    cTkColour mColour2;
    float mfColour2Alpha;

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
