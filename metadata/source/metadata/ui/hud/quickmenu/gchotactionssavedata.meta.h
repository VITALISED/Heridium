#pragma once
#include "../../../../../../pch.h"

#include "../../../../../../metadata/source/metadata/ui/hud/quickmenu/gcquickmenuactionsavedata.meta.h"

class cGcHotActionsSaveData
{
public:
    static const unsigned __int64 muNameHash = 0xE6D4EE849D2F9101;
    static const unsigned __int64 muTemplateHash = 0x1E124BFF067C79EA;
    static const int miNumMembers = 1;

    cTkFixedArray<cGcQuickMenuActionSaveData, 10> maKeyActions;

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
