#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/source/metadata/gamestate/basebuilding/gcbasebuildingpartinteractiondata.meta.h"
#include "../../../../../metadata/source/metadata/gamestate/basebuilding/gcbasebuildingpartnavnodedata.meta.h"

class cGcBaseBuildingPartNavData
{
public:
    static const unsigned __int64 muNameHash = 0xE1F61A258ED99443;
    static const unsigned __int64 muTemplateHash = 0xF889885B27980DD0;
    static const int miNumMembers = 3;

    TkID<256> mPartID;
    cTkDynamicArray<cGcBaseBuildingPartInteractionData> maSharedInteractions;
    cTkDynamicArray<cGcBaseBuildingPartNavNodeData> maNavNodeData;

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
