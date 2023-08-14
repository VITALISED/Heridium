#pragma once
#include "../../../../../pch.h"

enum eMissionMarkup
{
    EMissionMarkup_KillFiend = 0,
    EMissionMarkup_KillPirate = 1,
    EMissionMarkup_KillSentinel = 2,
    EMissionMarkup_KillHazardousPlants = 3,
    EMissionMarkup_KillTraders = 4,
    EMissionMarkup_KillCreatures = 5,
    EMissionMarkup_KillPredators = 6,
    EMissionMarkup_KillDepot = 7,
    EMissionMarkup_KillWorms = 8,
    EMissionMarkup_FeedCreature = 9,
    EMissionMarkup_CollectBones = 10,
    EMissionMarkup_CollectScrap = 11,
    EMissionMarkup_Discover = 12,
    EMissionMarkup_CollectSubstanceProduct = 13,
    EMissionMarkup_Build = 14,
    EMissionMarkup_Always = 15,
    EMissionMarkup_None = 16,
};

class cGcStatusMessageMissionMarkup
{
public:
    static const unsigned __int64 muNameHash = 0x8E8EC2C807363E97;
    static const unsigned __int64 muTemplateHash = 0xBE39D03F2CDE8335;
    static const int miNumMembers = 1;

    eMissionMarkup meMissionMarkup;

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
