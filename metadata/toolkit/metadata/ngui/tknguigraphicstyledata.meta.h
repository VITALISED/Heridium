#pragma once
#include "pch.h"

enum eShape
{
    EShape_Rectangle = 0,
    EShape_Ellipse = 1,
    EShape_Line = 2,
    EShape_LineInverted = 3,
    EShape_Bezier = 4,
    EShape_BezierInverted = 5,
    EShape_BezierWide = 6,
    EShape_BezierWideInverted = 7,
};

enum eGradient
{
    EGradient_None = 0,
    EGradient_Vertical = 1,
    EGradient_Horizontal = 2,
    EGradient_HorizontalBounce = 3,
    EGradient_Radial = 4,
    EGradient_Box = 5,
};

class cTkNGuiGraphicStyleData
{
public:
    static const unsigned __int64 muNameHash = 0x250B60FD6373D170;
    static const unsigned __int64 muTemplateHash = 0xD456283B718F9F11;
    static const int miNumMembers = 26;

    cTkColour mColour;
    cTkColour mIconColour;
    cTkColour mStrokeColour;
    cTkColour mGradientColour;
    cTkColour mStrokeGradientColour;
    float mfPaddingX;
    float mfPaddingY;
    float mfMarginX;
    float mfMarginY;
    float mfGradientStartOffset;
    float mfGradientEndOffset;
    float mfCornerRadius;
    float mfStrokeSize;
    int miImage;
    int miIcon;
    float mfDesaturation;
    float mfStrokeGradientOffset;
    float mfStrokeGradientFeather;
    eShape meShape;
    eGradient meGradient;
    bool mbSolidColour;
    bool mbHasDropShadow;
    bool mbHasOuterGradient;
    bool mbHasInnerGradient;
    bool mbGradientOffsetPercent;
    bool mbStrokeGradient;

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
