#pragma once
#include "../../../../../../pch.h"

#include "../../../../../../metadata/source/metadata/simulation/gcfrigateflybytype.meta.h"
#include "../../../../../../metadata/source/metadata/simulation/player/gcplayercommunicatormessage.meta.h"

class cGcPulseEncounterSpawnFrigateFlyby
{
public:
    static const unsigned __int64 muNameHash = 0x409E4BD41C6295C9;
    static const unsigned __int64 muTemplateHash = 0x997EFD1FBFF7CE9F;
    static const int miNumMembers = 3;

    cGcFrigateFlybyType mFlybyType;
    TkID<256> mCommunicatorOSDLocId;
    cGcPlayerCommunicatorMessage mCommunicatorMessage;

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
