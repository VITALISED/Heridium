#pragma once
#include "pch.h"

class cGcNGuiLayoutData;

class cGcNGuiPreset
{
public:
    static const unsigned __int64 muNameHash = 0x31B2A19D40422178;
    static const unsigned __int64 muTemplateHash = 0xB5733CBA8C6D4D8;
    static const int miNumMembers = 5;

    cTkFixedString<128,char> macFont;
    cTkFixedArray<cGcNGuiPresetGraphic, 10> maLayer;
    cTkFixedArray<cGcNGuiPresetGraphic, 10> maGraphic;
    cTkFixedArray<cGcNGuiPresetText, 10> maText;
    cGcNGuiLayoutData mSpacingLayout;

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
