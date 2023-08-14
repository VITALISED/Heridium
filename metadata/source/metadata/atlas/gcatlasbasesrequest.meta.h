#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/gamestate/gcuniverseaddressdata.meta.h"
#include "../../../../metadata/source/metadata/gamestate/gcgamemode.meta.h"

class cGcAtlasBasesRequest
{
public:
    static const unsigned __int64 muNameHash = 0x1E454D73CB415CEA;
    static const unsigned __int64 muTemplateHash = 0x93B2FDEC3B2BFFDA;
    static const int miNumMembers = 7;

    cGcUniverseAddressData mUniverseAddress;
    cGcGameMode mGameMode;
    int miMaxResults;
    int miMaxBytes;
    int miMinVersion;
    int miMaxVersion;
    cTkFixedString<32,char> macSpecificUserId;

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
