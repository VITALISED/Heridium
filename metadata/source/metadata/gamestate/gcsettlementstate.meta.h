#pragma once

#include "../../../../../../pch.h"
class cGcDiscoveryOwner;
class cGcSettlementJudgementType;
class cGcBuildingClassification;

class cGcSettlementState
{
    static const unsigned __int64 muNameHash = 10590957920379587502;
    static const unsigned __int64 muTemplateHash = 14607316972763747029;
    static const int miNumMembers = 24;

    cTkFixedString<64,char> macUniqueId;
    unsigned __int64 mui64UniverseAddress;
    cTkVector mPosition;
    unsigned __int64 mui64SeedValue;
    cTkFixedArray<int> maBuildingStates;
    cTkFixedArray<unsigned __int64> maLastBuildingUpgradesTimestamps;
    cTkFixedString<64,char> macName;
    cGcDiscoveryOwner mOwner;
    cGcSettlementJudgementType mPendingJudgementType;
    TkID<128> mPendingCustomJudgementID;
    cTkFixedArray<int> maStats;
    cTkDynamicArray<TkID<128> > maPerks;
    unsigned __int64 mui64LastJudgementTime;
    unsigned __int64 mui64LastUpkeepDebtCheckTime;
    unsigned __int64 mui64LastDebtChangeTime;
    unsigned __int64 mui64LastAlertChangeTime;
    cTkFixedString<64,char> macDbResourceId;
    unsigned __int64 mui64DbTimestamp;
    int miDbVersion;
    cTkFixedArray<cGcSettlementProductionSlotData> maProductionState;
    bool mbIsReported;
    int miNextBuildingUpgradeIndex;
    cGcBuildingClassification mNextBuildingUpgradeClass;
    unsigned __int64 mui64NextBuildingUpgradeSeedValue;

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
