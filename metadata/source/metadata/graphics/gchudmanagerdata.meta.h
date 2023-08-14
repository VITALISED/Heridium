#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/graphics/hud/gctextpreset.meta.h"
#include "../../../../metadata/toolkit/metadata/animation/tkcurvetype.meta.h"

class cGcHUDManagerData
{
public:
    static const unsigned __int64 muNameHash = 0x756972574B9CCB08;
    static const unsigned __int64 muTemplateHash = 0x205BFEB3B8061079;
    static const int miNumMembers = 33;

    cGcTextPreset mTitleFont;
    cGcTextPreset mSubtitleFont;
    cGcTextPreset mSubtitleFontSmall;
    float mfOSDCoreSize;
    float mfOSDFullSize;
    float mfOSDCoreAlpha;
    float mfOSDBaseTextY;
    float mfOSDBaseBandY;
    float mfOSDBorderY;
    float mfOSDUnderlineWidth;
    float mfPopUpCoreSize;
    float mfPopUpFullSize;
    float mfPopUpCoreAlpha;
    float mfPopUpY;
    float mfPopUpYMidLock;
    float mfOSDFadeSpeed;
    float mfOSDEdgeMergeAlpha;
    float mfOSDTextAppearRate;
    float mfOSDTextFadeRate;
    float mfOSDTextWaitOnAlpha;
    float mfPopUpFadeRate;
    float mfPopUpBGFadeInRate;
    float mfPopUpBGFadeOutRate;
    float mfPopUpBGTriggerFG;
    float mfPromptLine1Y;
    float mfPromptLine2Y;
    int miModelRenderTextureSize;
    int miModelRenderDisplaySize;
    int miModelRenderDisplayBorder;
    float mfModelRenderDisplayOffset;
    float mfModelRenderDisplayMove;
    cTkCurveType mModelRenderDisplayAlphaCurve;
    cTkCurveType mModelRenderDisplayMoveCurve;

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
