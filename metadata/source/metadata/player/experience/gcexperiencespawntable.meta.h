#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/source/metadata/simulation/spaceship/ai/gcaishipspawndata.meta.h"
#include "../../../../../metadata/source/metadata/simulation/spaceship/ai/gcbountyspawninfo.meta.h"
#include "../../../../../metadata/source/metadata/simulation/space/gcpulseencounterinfo.meta.h"
#include "../../../../../metadata/source/metadata/simulation/space/gcbackgroundspaceencounterinfo.meta.h"
#include "../../../../../metadata/source/metadata/gameplay/gcplayerexperiencespawntable.meta.h"
#include "../../../../../metadata/source/metadata/gameplay/gcplayerexperiencespawnarchetypedata.meta.h"
#include "../../../../../metadata/source/metadata/gameplay/gcplayerexperienceasteroidcreaturespawntable.meta.h"
#include "../../../../../metadata/source/metadata/gameplay/gcsentinelspawnsequencegrouplist.meta.h"
#include "../../../../../metadata/source/metadata/simulation/robots/gcsentinelencounteroverride.meta.h"
#include "../../../../../metadata/source/metadata/gameplay/gcsentinelwavegroup.meta.h"
#include "../../../../../metadata/source/metadata/gameplay/gcsentinelspawnnamedsequence.meta.h"
#include "../../../../../metadata/source/metadata/gameplay/gcsentinelspawnwave.meta.h"

class cGcExperienceSpawnTable
{
public:
    static const unsigned __int64 muNameHash = 0x5F4CA33999F0D259;
    static const unsigned __int64 muTemplateHash = 0xBFCF7EAF13124D91;
    static const int miNumMembers = 29;

    cTkDynamicArray<cGcAIShipSpawnData> maFlybySpawns;
    cTkDynamicArray<cGcAIShipSpawnData> maOutpostSpawns;
    cTkDynamicArray<cGcAIShipSpawnData> maSpaceFlybySpawns;
    cTkDynamicArray<cGcAIShipSpawnData> maMiningFlybySpawns;
    cTkDynamicArray<cGcAIShipSpawnData> maPirateSpawns;
    cTkDynamicArray<cGcAIShipSpawnData> maPlanetaryPirateFlybySpawns;
    cTkDynamicArray<cGcAIShipSpawnData> maPlanetaryPirateRaidSpawns;
    cTkDynamicArray<cGcAIShipSpawnData> maPirateBattleSpawns;
    cTkDynamicArray<cGcAIShipSpawnData> maPoliceSpawns;
    cTkDynamicArray<cGcAIShipSpawnData> maTraderSpawns;
    cTkDynamicArray<cGcAIShipSpawnData> maAmbientSpawns;
    cTkDynamicArray<cGcAIShipSpawnData> maBattleSpawns;
    cTkDynamicArray<cGcAIShipSpawnData> maAbandonedFreighterSpawns;
    cTkDynamicArray<cGcAIShipSpawnData> maBattleInitialStandardSpawns;
    cTkDynamicArray<cGcAIShipSpawnData> maBattleInitialPirateSpawns;
    cTkDynamicArray<cGcAIShipSpawnData> maBattleSecondaryPirateSpawns;
    cTkDynamicArray<cGcBountySpawnInfo> maPirateBountySpawns;
    cTkDynamicArray<cGcPulseEncounterInfo> maPulseEncounters;
    cTkDynamicArray<cGcBackgroundSpaceEncounterInfo> maBackgroundSpaceEncounters;
    cTkDynamicArray<cGcPlayerExperienceSpawnTable> maCreatureSpawnTable;
    cTkDynamicArray<cGcPlayerExperienceSpawnArchetypeData> maCreatureSpawnArchetypes;
    cGcPlayerExperienceAsteroidCreatureSpawnTable mAsteroidCreatureSpawns;
    cTkDynamicArray<cGcAIShipSpawnData> maFrigateFlybySpawns;
    cTkFixedArray<cGcSentinelSpawnSequenceGroupList, 6> maWantedLevelSpawns;
    cTkFixedArray<cGcSentinelSpawnSequenceGroupList, 7> maEncounterSpawns;
    cTkDynamicArray<cGcSentinelEncounterOverride> maEncounterOverrides;
    cGcSentinelWaveGroup mSummonerSpawns;
    cTkDynamicArray<cGcSentinelSpawnNamedSequence> maSentinelSequences;
    cTkDynamicArray<cGcSentinelSpawnWave> maSentinelSpawns;

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
