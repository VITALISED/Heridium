#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/toolkit/metadata/ngui/tknguiwindowlayoutdata.meta.h"

class cTkNGuiEditorLayout
{
public:
    static const unsigned __int64 muNameHash = 0x7CDF4EDAA0962EA0;
    static const unsigned __int64 muTemplateHash = 0xDB8062CC3F7B6833;
    static const int miNumMembers = 1;

    cTkFixedArray<cTkNGuiWindowLayoutData, 256> maWindows;

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
