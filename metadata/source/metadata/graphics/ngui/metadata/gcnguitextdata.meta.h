#pragma once
#include "pch.h"

class cGcNGuiElementData;
class cTkNGuiTextStyle;
class cTkNGuiGraphicStyle;

class cGcNGuiTextData
{
public:
    static const unsigned __int64 muNameHash = 0x4C5F02B93CB08B1A;
    static const unsigned __int64 muTemplateHash = 0x399A33599C8EC1D3;
    static const int miNumMembers = 10;

    cGcNGuiElementData mElementData;
    cTkNGuiTextStyle mStyle;
    cTkNGuiGraphicStyle mGraphicStyle;
    cTkFixedString<512,char> macText;
    cTkFixedString<128,char> macImage;
    float mfForcedOffset;
    cTkDynamicArray<cGcVROverride_Text1> maVROverrides;
    cTkDynamicArray<cGcAccessibleOverride_Text1> maAccessibleOverrides;
    bool mbSpecial;
    bool mbForcedAllowScroll;

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
