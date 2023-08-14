#pragma once
#include "../../../../pch.h"

enum eScanEventTable
{
    EScanEventTable_Space = 0,
    EScanEventTable_Planet = 1,
    EScanEventTable_Missions = 2,
    EScanEventTable_Tutorial = 3,
    EScanEventTable_MissionsCreative = 4,
    EScanEventTable_NPCPlanetSite = 5,
};

class cGcRewardScanEvent
{
public:
    static const unsigned __int64 muNameHash = 0xD6D2BF5DDCCD9F49;
    static const unsigned __int64 muTemplateHash = 0x1AB044C825466554;
    static const int miNumMembers = 6;

    TkID<256> mEvent;
    eScanEventTable meScanEventTable;
    bool mbDoAerialScan;
    bool mbUseMissionSeedForEvent;
    float mfStartDelay;
    bool mbUseStartDelayWhenNoAerialScan;

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
