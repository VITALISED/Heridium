#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/reality/gcdiscoveryowner.meta.h"
#include "../../../../metadata/source/metadata/gameplay/gcsettlementjudgementtype.meta.h"
#include "../../../../metadata/source/metadata/gamestate/gcsettlementproductionslotdata.meta.h"
#include "../../../../metadata/source/metadata/simulation/environment/gcbuildingclassification.meta.h"

class cGcSettlementState
{
public:
    static const unsigned __int64 muNameHash = 0x92FAA41D8355CBAE;
    static const unsigned __int64 muTemplateHash = 0xCAB79D64D31E12D5;
    static const int miNumMembers = 24;

    cTkFixedString<64,char> macUniqueId;
    unsigned __int64 mui64UniverseAddress;
    cTkVector3 mPosition;
    unsigned __int64 mui64SeedValue;
    cTkFixedArray<int, 48> maBuildingStates;
    cTkFixedArray<unsigned __int64, 48> maLastBuildingUpgradesTimestamps;
    cTkFixedString<64,char> macName;
    cGcDiscoveryOwner mOwner;
    cGcSettlementJudgementType mPendingJudgementType;
    TkID<128> mPendingCustomJudgementID;
    cTkFixedArray<int, 7> maStats;
    cTkDynamicArray<TkID<128> > maPerks;
    unsigned __int64 mui64LastJudgementTime;
    unsigned __int64 mui64LastUpkeepDebtCheckTime;
    unsigned __int64 mui64LastDebtChangeTime;
    unsigned __int64 mui64LastAlertChangeTime;
    cTkFixedString<64,char> macDbResourceId;
    unsigned __int64 mui64DbTimestamp;
    int miDbVersion;
    cTkFixedArray<cGcSettlementProductionSlotData, 2> maProductionState;
    bool mbIsReported;
    int miNextBuildingUpgradeIndex;
    cGcBuildingClassification mNextBuildingUpgradeClass;
    unsigned __int64 mui64NextBuildingUpgradeSeedValue;

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
