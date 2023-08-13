#pragma once

#include "../../../../../../../../pch.h"
class cGcSolarSystemLocatorChoice;
class cGcRealityCommonFactions;
class cGcAISpaceshipRoles;

class cGcSolarSystemEventWarpIn
{
    static const unsigned __int64 muNameHash = 8193859043426087857;
    static const unsigned __int64 muTemplateHash = 7255577944017967211;
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
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
