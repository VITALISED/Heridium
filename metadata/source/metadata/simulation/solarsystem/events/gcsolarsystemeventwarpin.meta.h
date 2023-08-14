#pragma once
#include "../../../../../../pch.h"

#include "../../../../../../metadata/source/metadata/simulation/solarsystem/gcsolarsystemlocatorchoice.meta.h"
#include "../../../../../../metadata/source/metadata/reality/gcrealitycommonfactions.meta.h"
#include "../../../../../../metadata/source/metadata/simulation/spaceship/ai/gcaispaceshiproles.meta.h"

class cGcSolarSystemEventWarpIn
{
public:
    static const unsigned __int64 muNameHash = 0x71B66F631708B3B1;
    static const unsigned __int64 muTemplateHash = 0x64B0FDB2C959986B;
    static const int miNumMembers = 14;

    cGcSolarSystemLocatorChoice mLocator;
    float mfTime;
    int miRepeat;
    cTkVector2 mRepeatIntervalRange;
    bool mbInvertDirection;
    bool mbInstantWarpIn;
    cTkFixedString<32,char> macSquadName;
    cTkSeed mSeed;
    cGcRealityCommonFactions mFaction;
    cGcAISpaceshipRoles mShipRole;
    cTkDynamicArray<int> maShipChoiceSequence;
    cTkVector2 mShipCountRange;
    cTkVector2 mWarpIntervalRange;
    cTkVector2 mSpeedRange;

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
