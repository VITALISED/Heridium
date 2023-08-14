#pragma once
#include "../../../../../../pch.h"

#include "../../../../../../metadata/toolkit/metadata/utilities/data/tkinputenum.meta.h"
#include "../../../../../../metadata/source/metadata/simulation/spaceship/ai/gcaispaceshiproles.meta.h"
#include "../../../../../../metadata/source/metadata/simulation/spaceship/ai/gcaishipspawnmarkerdata.meta.h"

enum eSpawnShape
{
    ESpawnShape_Sphere = 0,
    ESpawnShape_Cone = 1,
};
#include "../../../../../../metadata/source/metadata/simulation/spaceship/gcshipaiperformancearray.meta.h"
#include "../../../../../../metadata/source/metadata/simulation/spaceship/ai/gcaishipspawndata.meta.h"

class cGcAIShipSpawnData
{
public:
    static const unsigned __int64 muNameHash = 0x35C91009067A6431;
    static const unsigned __int64 muTemplateHash = 0x9CE6A6ED6DE9D4B5;
    static const int miNumMembers = 18;

    TkID<256> mMessage;
    TkID<256> mCombatMessage;
    TkID<256> mOSDMessage;
    cTkInputEnum mShortcut;
    bool mbWarpIn;
    cGcAISpaceshipRoles mRole;
    float mfMinRange;
    cTkVector2 mScale;
    TkID<128> mReward;
    TkID<256> mRewardMessage;
    cGcAIShipSpawnMarkerData mMarkerData;
    bool mbAttackFreighter;
    cTkVector2 mSpread;
    cTkVector2 mCount;
    cTkVector2 mStartTime;
    eSpawnShape meSpawnShape;
    cGcShipAIPerformanceArray mPerformances;
    cTkDynamicArray<cGcAIShipSpawnData> maChildSpawns;

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
