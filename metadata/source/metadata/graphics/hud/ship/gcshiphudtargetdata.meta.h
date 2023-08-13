#pragma once
#include "../../../../../../../../pch.h"

class cGcShipHUDTargetIconData;

class cGcShipHUDTargetData
{
    static const unsigned __int64 muNameHash = 0x24B6E7D6F92704D5;
    static const unsigned __int64 muTemplateHash = 0x1EF6B898301EEBD5;
    static const int miNumMembers = 25;

    cGcShipHUDTargetIconData mIconData;
    cTkFixedString<128,char> macArrow;
    float mfIconSizeIn;
    float mfIconMinSize;
    float mfIconMaxSize;
    float mfIconSizeScale;
    float mfArrowScale;
    float mfArrowOffset;
    float mfArrowMinFadeDist;
    float mfArrowFadeRange;
    float mfArrowMinSize;
    float mfArrowMaxSize;
    cTkColour mBaseColour;
    float mfActiveDistance;
    float mfActivateTime;
    float mfGlowAlpha;
    float mfHighlightTime;
    float mfHitPulse;
    float mfHitPulseTime;
    float mfHitWhiteOut;
    cTkColour mLockColour;
    float mfPoliceColourFreq;
    cTkColour mPoliceColour1;
    cTkColour mPoliceColour2;
    cTkColour mThreatColour;

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
