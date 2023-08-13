#pragma once

#include "../../../../../../pch.h"
enum eLastKnownPlayerState
{
    ELastKnownPlayerState_OnFoot = 0,
    ELastKnownPlayerState_InShip = 1,
    ELastKnownPlayerState_InStation = 2,
    ELastKnownPlayerState_AboardFleet = 3,
    ELastKnownPlayerState_InNexus = 4,
    ELastKnownPlayerState_AbandonedFreighter = 5,
    ELastKnownPlayerState_InShipLanded = 6,
};

class cGcPlayerSpawnStateData
{
    static const unsigned __int64 muNameHash = 8037861221746426092;
    static const unsigned __int64 muTemplateHash = 13896045707468341468;
    static const int miNumMembers = 13;

    cTkVector4 mPlayerPositionInSystem;
    cTkVector4 mPlayerTransformAt;
    cTkVector4 mPlayerDeathRespawnPositionInSystem;
    cTkVector4 mPlayerDeathRespawnTransformAt;
    cTkVector4 mShipPositionInSystem;
    cTkVector4 mShipTransformAt;
    eLastKnownPlayerState meLastKnownPlayerState;
    cTkVector4 mFreighterPositionInSystem;
    cTkVector4 mFreighterTransformAt;
    cTkVector4 mFreighterTransformUp;
    cTkVector4 mAbandonedFreighterPositionInSystem;
    cTkVector4 mAbandonedFreighterTransformAt;
    cTkVector4 mAbandonedFreighterTransformUp;

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
