#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/source/metadata/gamestate/basebuilding/npc/gcnpcnavsubgraphnodetype.meta.h"

class cGcBaseBuildingPartNavNodeData
{
public:
    static const unsigned __int64 muNameHash = 0xAE95337199B47CD;
    static const unsigned __int64 muTemplateHash = 0xACE410E33E2B84B0;
    static const int miNumMembers = 6;

    cGcNPCNavSubgraphNodeType mType;
    cTkVector3 mLocalPos;
    float mfArriveDist;
    cTkVector3 mAtDir;
    TkID<128> mInteractionID;
    cTkDynamicArray<unsigned int> maConnectedNodeIndices;

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
