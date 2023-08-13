#pragma once
#include "../../../../../../pch.h"

class cTkNGuiAlignment;

class cTkNGuiTextStyleData
{
    static const unsigned __int64 muNameHash = 0x91FBF976CBE15B5F;
    static const unsigned __int64 muTemplateHash = 0x22A52D3E97156EEF;
    static const int miNumMembers = 19;

    cTkColour mColour;
    cTkColour mShadowColour;
    cTkColour mOutlineColour;
    float mfFontHeight;
    float mfFontSpacing;
    float mfDropShadowAngle;
    float mfDropShadowOffset;
    float mfOutlineSize;
    int miFontIndex;
    cTkNGuiAlignment mAlign;
    bool mbIsIndented;
    bool mbHasDropShadow;
    bool mbHasOutline;
    bool mbIsParagraph;
    bool mbAllowScroll;
    bool mbForceUpperCase;
    bool mbAutoAdjustHeight;
    bool mbAutoAdjustFontHeight;
    bool mbBlockAudio;

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
