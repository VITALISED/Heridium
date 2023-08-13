#pragma once

#include "../../../../../../pch.h"
class cTkNGuiGraphicStyleData;
class cTkNGuiGraphicStyleData;
class cTkNGuiGraphicStyleData;
class cTkCurveType;
class cTkCurveType;

enum eAnimate
{
    EAnimate_None = 0,
    EAnimate_WipeRightToLeft = 1,
    EAnimate_SimpleWipe = 2,
    EAnimate_SimpleWipeDown = 3,
    EAnimate_CustomWipe = 4,
    EAnimate_CustomWipeAlpha = 5,
};

class cTkNGuiGraphicStyle
{
    static const unsigned __int64 muNameHash = 13188921036264893676;
    static const unsigned __int64 muTemplateHash = 1483407535392601428;
    static const int miNumMembers = 14;

    cTkNGuiGraphicStyleData mDefault;
    cTkNGuiGraphicStyleData mHighlight;
    cTkNGuiGraphicStyleData mActive;
    cTkVector2 mCustomMinStart;
    cTkVector2 mCustomMaxStart;
    float mfHighlightTime;
    float mfHighlightScale;
    float mfGlobalFade;
    float mfAnimTime;
    float mfAnimSplit;
    cTkCurveType mAnimCurve1;
    cTkCurveType mAnimCurve2;
    eAnimate meAnimate;
    bool mbInheritStyleFromParentLayer;

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
