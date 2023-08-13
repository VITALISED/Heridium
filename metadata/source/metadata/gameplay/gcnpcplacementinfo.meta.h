#pragma once
#include "pch.h"

class cGcAlienRace;
class cGcInteractionType;
class cGcTechnologyCategory;

class cGcNPCPlacementInfo
{
public:
    static const unsigned __int64 muNameHash = 0xA12AC584067DF8E0;
    static const unsigned __int64 muTemplateHash = 0xBC234D69742168C;
    static const int miNumMembers = 21;

    TkID<128> mPlacementRuleId;
    cTkFixedString<32,char> macSpawnUnderNodeName;
    cTkFixedString<32,char> macPlacmentNodeName;
    bool mbMustPlace;
    float mfSpawnChance;
    float mfFractionOfNodesActive;
    int miMaxNodesActivated;
    TkID<128> mSpawnSpecific;
    cGcAlienRace mRace;
    bool mbSpawnAnyMajorRace;
    cGcInteractionType mInteractionOverride;
    cGcTechnologyCategory mTechShopCategory;
    TkID<256> mForceInteraction;
    cTkDynamicArray<cGcAlienPuzzleMissionOverride1> maPuzzleMissionOverrideTable;
    bool mbDisableInteraction;
    bool mbUseFreighterNPC;
    bool mbPlaceAtLeastOne;
    bool mbSpawnMoving;
    bool mbSpawnInAbandoned;
    cTkDynamicArray<TkID<128>1> maHideDuringMissions;
    bool mbOnlyUsePuzzleOverridesIfPlayerOwned;

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
