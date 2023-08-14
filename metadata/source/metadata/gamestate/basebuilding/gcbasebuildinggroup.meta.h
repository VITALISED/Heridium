#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/toolkit/metadata/tktextureresource.meta.h"
#include "../../../../../metadata/source/metadata/gamestate/basebuilding/gcbasebuildingsubgroup.meta.h"

class cGcBaseBuildingGroup
{
public:
    static const unsigned __int64 muNameHash = 0xF37F133693523902;
    static const unsigned __int64 muTemplateHash = 0x3441CC565EC3BCC0;
    static const int miNumMembers = 5;

    TkID<128> mID;
    TkID<256> mName;
    cTkTextureResource mIcon;
    int miDefaultColourIdx;
    cTkDynamicArray<cGcBaseBuildingSubGroup> maSubGroups;

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
