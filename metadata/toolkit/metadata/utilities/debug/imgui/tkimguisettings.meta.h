#pragma once

#include "../../../../../../../../pch.h"
class cTkImGuiSettings
{
    static const unsigned __int64 muNameHash = 2375631327007152562;
    static const unsigned __int64 muTemplateHash = 10111099868015265566;
    static const int miNumMembers = 26;

    cTkColour mBackgroundColour;
    cTkColour mWindowTitleColour;
    cTkColour mActiveWindowTitleColour;
    cTkColour mWindowBackgroundColour;
    cTkColour mActiveWindowBackgroundColour;
    cTkColour mWindowHighlight;
    cTkColour mTextColour;
    cTkColour mActiveTextColour;
    cTkColour mTextShadowColour;
    cTkColour mTextDisabledColour;
    cTkColour mButtonColour;
    cTkColour mButtonHighlightColour;
    cTkColour mButtonPressedColour;
    cTkColour mEditBoxColour;
    cTkColour mEditBoxActiveColour;
    cTkColour mEditBoxSelectedColour;
    cTkColour mTaskBarColour;
    cTkColour mTaskBarShadow;
    cTkColour mCloseButtonColour;
    cTkColour mCloseButtonHighlightColour;
    cTkColour mCloseButtonClickColour;
    cTkColour mMinimiseButtonColour;
    cTkColour mMinimiseButtonHighlightColour;
    cTkColour mMinimiseButtonClickColour;
    float mfScrollSpeed;
    float mfAltPlacementDistanceScrollSpeed;

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
