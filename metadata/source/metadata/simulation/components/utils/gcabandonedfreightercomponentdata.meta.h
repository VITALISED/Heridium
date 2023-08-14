#pragma once
#include "../../../../../../pch.h"

#include "../../../../../../metadata/toolkit/metadata/tkmodelresource.meta.h"
#include "../../../../../../metadata/source/metadata/simulation/gcfreighterdungeonchoice.meta.h"
#include "../../../../../../metadata/toolkit/metadata/tktextureresource.meta.h"

class cGcAbandonedFreighterComponentData
{
public:
    static const unsigned __int64 muNameHash = 0x95028D8CB7957BEF;
    static const unsigned __int64 muTemplateHash = 0xDFC505E8066AB0E7;
    static const int miNumMembers = 4;

    cTkModelResource mDungeonRootScene;
    cTkDynamicArray<cGcFreighterDungeonChoice> maDungeonOptions;
    TkID<256> mMarkerLabel;
    cTkTextureResource mMarkerIcon;

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
