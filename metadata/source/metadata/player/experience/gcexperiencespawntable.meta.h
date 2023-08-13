#pragma once
#include "pch.h"

class cGcPlayerExperienceAsteroidCreatureSpawnTable;
class cGcSentinelWaveGroup;

class cGcExperienceSpawnTable
{
public:
    static const unsigned __int64 muNameHash = 0x5F4CA33999F0D259;
    static const unsigned __int64 muTemplateHash = 0xBFCF7EAF13124D91;
    static const int miNumMembers = 29;

    cTkDynamicArray<cGcAIShipSpawnData1> maFlybySpawns;
    cTkDynamicArray<cGcAIShipSpawnData1> maOutpostSpawns;
    cTkDynamicArray<cGcAIShipSpawnData1> maSpaceFlybySpawns;
    cTkDynamicArray<cGcAIShipSpawnData1> maMiningFlybySpawns;
    cTkDynamicArray<cGcAIShipSpawnData1> maPirateSpawns;
    cTkDynamicArray<cGcAIShipSpawnData1> maPlanetaryPirateFlybySpawns;
    cTkDynamicArray<cGcAIShipSpawnData1> maPlanetaryPirateRaidSpawns;
    cTkDynamicArray<cGcAIShipSpawnData1> maPirateBattleSpawns;
    cTkDynamicArray<cGcAIShipSpawnData1> maPoliceSpawns;
    cTkDynamicArray<cGcAIShipSpawnData1> maTraderSpawns;
    cTkDynamicArray<cGcAIShipSpawnData1> maAmbientSpawns;
    cTkDynamicArray<cGcAIShipSpawnData1> maBattleSpawns;
    cTkDynamicArray<cGcAIShipSpawnData1> maAbandonedFreighterSpawns;
    cTkDynamicArray<cGcAIShipSpawnData1> maBattleInitialStandardSpawns;
    cTkDynamicArray<cGcAIShipSpawnData1> maBattleInitialPirateSpawns;
    cTkDynamicArray<cGcAIShipSpawnData1> maBattleSecondaryPirateSpawns;
    cTkDynamicArray<cGcBountySpawnInfo1> maPirateBountySpawns;
    cTkDynamicArray<cGcPulseEncounterInfo1> maPulseEncounters;
    cTkDynamicArray<cGcBackgroundSpaceEncounterInfo1> maBackgroundSpaceEncounters;
    cTkDynamicArray<cGcPlayerExperienceSpawnTable1> maCreatureSpawnTable;
    cTkDynamicArray<cGcPlayerExperienceSpawnArchetypeData1> maCreatureSpawnArchetypes;
    cGcPlayerExperienceAsteroidCreatureSpawnTable mAsteroidCreatureSpawns;
    cTkDynamicArray<cGcAIShipSpawnData1> maFrigateFlybySpawns;
    cTkFixedArray<cGcSentinelSpawnSequenceGroupList, 6> maWantedLevelSpawns;
    cTkFixedArray<cGcSentinelSpawnSequenceGroupList, 7> maEncounterSpawns;
    cTkDynamicArray<cGcSentinelEncounterOverride1> maEncounterOverrides;
    cGcSentinelWaveGroup mSummonerSpawns;
    cTkDynamicArray<cGcSentinelSpawnNamedSequence1> maSentinelSequences;
    cTkDynamicArray<cGcSentinelSpawnWave1> maSentinelSpawns;

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
