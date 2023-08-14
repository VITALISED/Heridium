#pragma once
#include "../../../../../../pch.h"

#include "../../../../../../metadata/source/metadata/graphics/ngui/metadata/gcnguilayoutdata.meta.h"
#include "../../../../../../metadata/toolkit/metadata/ngui/tknguitextstyle.meta.h"
#include "../../../../../../metadata/toolkit/metadata/ngui/tknguigraphicstyle.meta.h"

class cGcNGuiPresetText
{
public:
    static const unsigned __int64 muNameHash = 0x633D54FB94B2C6A4;
    static const unsigned __int64 muTemplateHash = 0x8C61BE7015E84E93;
    static const int miNumMembers = 5;

    TkID<128> mPresetID;
    cGcNGuiLayoutData mLayout;
    cTkNGuiTextStyle mStyle;
    cTkNGuiGraphicStyle mGraphicStyle;
    cTkFixedString<128,char> macImage;

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
