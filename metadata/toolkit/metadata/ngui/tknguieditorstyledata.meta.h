#pragma once

#include "../../../../../../pch.h"
class cTkNGuiEditorStyleData
{
    static const unsigned __int64 muNameHash = 8009299103972046348;
    static const unsigned __int64 muTemplateHash = 646965598215171104;
    static const int miNumMembers = 7;

    cTkFixedArray<float> maSizes;
    cTkFixedArray<cTkNGuiEditorStyleColour> maSkinColours;
    float mfSkinFontHeight;
    cTkFixedString<128,char> macFont;
    cTkFixedArray<cTkNGuiGraphicStyle> maGraphicStyles;
    cTkFixedArray<cTkNGuiTextStyle> maTextStyles;
    cTkDynamicArray<float> maSnapSettings;

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
