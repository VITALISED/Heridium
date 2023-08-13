#pragma once

#include "../../../../../../../../pch.h"
class cGcNGuiLayoutData;

class cGcNGuiPreset
{
    static const unsigned __int64 muNameHash = 3581102350472978808;
    static const unsigned __int64 muTemplateHash = 817178807194014936;
    static const int miNumMembers = 5;

    cTkFixedString<128,char> macFont;
    cTkFixedArray<cGcNGuiPresetGraphic> maLayer;
    cTkFixedArray<cGcNGuiPresetGraphic> maGraphic;
    cTkFixedArray<cGcNGuiPresetText> maText;
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