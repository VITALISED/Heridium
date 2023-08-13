#pragma once

#include "../../../../../../../pch.h"
class cTkTextureResource;

class cGcShipAICombatDefinition
{
    static const unsigned __int64 muNameHash = 2878142413346744113;
    static const unsigned __int64 muTemplateHash = 1646377002278844355;
    static const int miNumMembers = 13;

    TkID<128> mId;
    TkID<128> mBehaviour;
    TkID<128> mPlanetBehaviour;
    TkID<128> mEngine;
    TkID<128> mPlanetEngine;
    TkID<128> mReward;
    int miRewardCount;
    int miHealth;
    int miLevelledExtraHealth;
    TkID<128> mShield;
    TkID<128> mGun;
    int miLaserDamageLevel;
    cTkTextureResource mIcon;

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
