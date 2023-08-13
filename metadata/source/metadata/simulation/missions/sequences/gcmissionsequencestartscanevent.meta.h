#pragma once

#include "../../../../../../../../pch.h"
class cGcScanEventTableType;
class cGcPlayerMissionParticipantType;

class cGcMissionSequenceStartScanEvent
{
    static const unsigned __int64 muNameHash = 9575334136625132807;
    static const unsigned __int64 muTemplateHash = 4811940720148540407;
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
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};