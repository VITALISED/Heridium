#pragma once
#include "../../../../../../pch.h"

#include "../../../../../../metadata/source/metadata/ui/hud/quickmenu/gcquickmenuactions.meta.h"
#include "../../../../../../metadata/source/metadata/gamestate/gcinventoryindex.meta.h"

class cGcQuickMenuActionSaveData
{
public:
    static const unsigned __int64 muNameHash = 0x15BEBD4BD6DD1244;
    static const unsigned __int64 muTemplateHash = 0xA7329F7D002F1EE4;
    static const int miNumMembers = 4;

    cGcQuickMenuActions mAction;
    TkID<128> mId;
    int miNumber;
    cGcInventoryIndex mInventoryIndex;

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
