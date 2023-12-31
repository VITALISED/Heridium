#pragma once
#include "../../../../../pch.h"

enum eReplicateTo
{
    EReplicateTo_None = 0,
    EReplicateTo_Fireteam = 1,
    EReplicateTo_Fireteam_SameUA = 2,
    EReplicateTo_Global = 3,
    EReplicateTo_Global_Distance = 4,
    EReplicateTo_Fireteam_Distance = 5,
    EReplicateTo_Fireteam_Global_Distance = 6,
    EReplicateTo_Not_Fireteam = 7,
};
#include "../../../../../metadata/source/metadata/gamestate/messages/gcstatusmessagemissionmarkup.meta.h"

class cGcStatusMessageDefinition
{
public:
    static const unsigned __int64 muNameHash = 0x93C1244DBEE0E0CF;
    static const unsigned __int64 muTemplateHash = 0xDE28BA6FB5EB5CDE;
    static const int miNumMembers = 13;

    TkID<128> mId;
    TkID<256> mMessage;
    bool mbAddPlayerNamePrefix;
    bool mbAddPetNamePrefix;
    bool mbAddFriendlyDronePrefix;
    bool mbIncludePlayerName;
    eReplicateTo meReplicateTo;
    bool mbPostLocally;
    float mfDistance;
    float mfDisplayDurationMultiplier;
    bool mbOnlyInMultiplayer;
    bool mbOnlyOnFireteam;
    cGcStatusMessageMissionMarkup mMissionMarkup;

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
