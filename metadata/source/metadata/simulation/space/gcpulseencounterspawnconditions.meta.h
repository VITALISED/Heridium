#pragma once
#include "../../../../../pch.h"

class cGcPulseEncounterSpawnConditions
{
public:
    static const unsigned __int64 muNameHash = 0x662E605B574D59AB;
    static const unsigned __int64 muTemplateHash = 0xB32222FDB5279407;
    static const int miNumMembers = 13;

    bool mbAllowedInCreative;
    bool mbAllowedInEmptySystem;
    bool mbAllowedDuringTutorial;
    bool mbAllowedBeyondPortals;
    bool mbAllowedWhileOnMPMission;
    TkID<128> mRequiresProduct;
    TkID<128> mRequiresMissionComplete;
    TkID<128> mRequiresMissionActive;
    TkID<128> mRequiresMissionNotComplete;
    TkID<128> mRequiresMissionNotActive;
    bool mbRequiresAlienShip;
    bool mbStandardEncounter;
    bool mbMissionEncounter;

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
