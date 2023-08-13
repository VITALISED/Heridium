#pragma once

#include "../../../../../../../pch.h"
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
class cGcStatusMessageMissionMarkup;

class cGcStatusMessageDefinition
{
    static const unsigned __int64 muNameHash = 10646830910414053583;
    static const unsigned __int64 muTemplateHash = 16008249864444665054;
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
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
