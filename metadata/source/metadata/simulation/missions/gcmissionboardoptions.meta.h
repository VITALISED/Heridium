#pragma once
#include "pch.h"

class cGcMissionType;
class cGcMissionDifficulty;

enum eDefaultItemTypeForInitialWarp
{
    EDefaultItemTypeForInitialWarp_None = 0,
    EDefaultItemTypeForInitialWarp_PrimaryProduct = 1,
    EDefaultItemTypeForInitialWarp_PrimarySubstance = 2,
    EDefaultItemTypeForInitialWarp_SecondaryProduct = 3,
    EDefaultItemTypeForInitialWarp_SecondarySubstance = 4,
};

class cGcMissionBoardOptions
{
public:
    static const unsigned __int64 muNameHash = 0xDD272E15749CCDF5;
    static const unsigned __int64 muTemplateHash = 0xFC68B7B7649C4567;
    static const int miNumMembers = 15;

    cGcMissionType mType;
    cGcMissionDifficulty mDifficulty;
    int miMinRank;
    bool mbCloseMissionGiver;
    bool mbIsGuildShopMission;
    bool mbIsPlanetProcMission;
    bool mbIsMultiplayerEventMission;
    TkID<128> mRewardPenaltyOnAbandon;
    cTkDynamicArray<cGcMissionFaction1> maFaction;
    int miWeighting;
    bool mbIgnoreCalculatedObjective;
    TkID<256> mMultiplayerMissionInitialWarpScanEvent;
    cTkDynamicArray<TkID<256>1> maDefaultItemInitialWarpScanEvents;
    eDefaultItemTypeForInitialWarp meDefaultItemTypeForInitialWarp;
    cTkDynamicArray<TkID<128>1> maBasePartBlueprints;

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
