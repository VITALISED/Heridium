#pragma once
#include "../../../../../../pch.h"

#include "../../../../../../metadata/source/metadata/simulation/gcscaneventtabletype.meta.h"
#include "../../../../../../metadata/source/metadata/gamestate/gcplayermissionparticipanttype.meta.h"

class cGcMissionSequenceStartScanEvent
{
public:
    static const unsigned __int64 muNameHash = 0x84E26BAA3B367507;
    static const unsigned __int64 muTemplateHash = 0x42C7729718B0EBF7;
    static const int miNumMembers = 7;

    cGcScanEventTableType mTable;
    cGcPlayerMissionParticipantType mParticipant;
    TkID<256> mEvent;
    float mfTime;
    bool mbDoAerialScan;
    bool mbAllowOtherPlayersBase;
    cTkFixedString<128,char> macDebugText;

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
