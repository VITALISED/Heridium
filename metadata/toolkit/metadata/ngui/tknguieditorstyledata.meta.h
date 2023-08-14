#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/toolkit/metadata/ngui/tknguieditorstylecolour.meta.h"
#include "../../../../metadata/toolkit/metadata/ngui/tknguigraphicstyle.meta.h"
#include "../../../../metadata/toolkit/metadata/ngui/tknguitextstyle.meta.h"

class cTkNGuiEditorStyleData
{
public:
    static const unsigned __int64 muNameHash = 0x6F26BF19981BB60C;
    static const unsigned __int64 muTemplateHash = 0x8FA7BC8A7836C20;
    static const int miNumMembers = 7;

    cTkFixedArray<float, 48> maSizes;
    cTkFixedArray<cTkNGuiEditorStyleColour, 8> maSkinColours;
    float mfSkinFontHeight;
    cTkFixedString<128,char> macFont;
    cTkFixedArray<cTkNGuiGraphicStyle, 72> maGraphicStyles;
    cTkFixedArray<cTkNGuiTextStyle, 14> maTextStyles;
    cTkDynamicArray<float> maSnapSettings;

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
