#pragma once
#include "../../../../../../pch.h"

enum eMissionUpdateMessage
{
    EMissionUpdateMessage_Start = 0,
    EMissionUpdateMessage_End = 1,
};

enum ePlayMusicSting
{
    EPlayMusicSting_None = 0,
    EPlayMusicSting_Start = 1,
    EPlayMusicSting_End = 2,
};

class cGcMissionSequenceShowMissionUpdateMessage
{
public:
    static const unsigned __int64 muNameHash = 0x2431FBC75DE4AEB6;
    static const unsigned __int64 muTemplateHash = 0xD729431BCB083995;
    static const int miNumMembers = 8;

    eMissionUpdateMessage meMissionUpdateMessage;
    TkID<256> mCustomMessageLocID;
    TkID<256> mCustomObjectiveLocID;
    bool mbSetMissionSelected;
    bool mbWaitForMessageOver;
    bool mbShowChangeMissionNotify;
    ePlayMusicSting mePlayMusicSting;
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
