#pragma once
#include "../../../../../../pch.h"

class cGcInteractionType;
class cGcAlienRace;

enum eEventStartType
{
    EEventStartType_None = 0,
    EEventStartType_Special = 1,
    EEventStartType_Discovered = 2,
    EEventStartType_Timer = 3,
    EEventStartType_ObjectScan = 4,
    EEventStartType_LeaveBuilding = 5,
};

enum eEventEndType
{
    EEventEndType_None = 0,
    EEventEndType_Proximity = 1,
    EEventEndType_Interact = 2,
    EEventEndType_EnterBuilding = 3,
    EEventEndType_TimedInteract = 4,
};

enum eEventPriority
{
    EEventPriority_Regular = 0,
    EEventPriority_High = 1,
};

enum eBuildingLocation
{
    EBuildingLocation_Nearest = 0,
    EBuildingLocation_AllNearest = 1,
    EBuildingLocation_Random = 2,
    EBuildingLocation_RandomOnNearPlanet = 3,
    EBuildingLocation_RandomOnFarPlanet = 4,
    EBuildingLocation_PlanetSearch = 5,
    EBuildingLocation_PlayerSettlement = 6,
};

enum eBuildingType
{
    EBuildingType_Any = 0,
    EBuildingType_AnyShelter = 1,
    EBuildingType_AnyNPC = 2,
    EBuildingType_BuildingClass = 3,
    EBuildingType_SpaceStation = 4,
    EBuildingType_SpaceAnomaly = 5,
    EBuildingType_Atlas = 6,
    EBuildingType_Freighter = 7,
    EBuildingType_FreighterBase = 8,
    EBuildingType_ExternalPlanetBase = 9,
    EBuildingType_PlanetBaseTerminal = 10,
    EBuildingType_Expedition = 11,
    EBuildingType_TutorialShelter = 12,
    EBuildingType_MPMissionFreighter = 13,
    EBuildingType_Nexus = 14,
    EBuildingType_InitialDistressSignal = 15,
    EBuildingType_SpaceMarker = 16,
    EBuildingType_NexusEggMachine = 17,
    EBuildingType_PhotoTarget = 18,
    EBuildingType_SettlementConstruction = 19,
    EBuildingType_UnownedSettlement = 20,
    EBuildingType_NPC_HideOut = 21,
    EBuildingType_FriendlyDrone = 22,
};
class cGcBuildingClassification;

enum eSolarSystemLocation
{
    ESolarSystemLocation_Local = 0,
    ESolarSystemLocation_Near = 1,
    ESolarSystemLocation_LocalOrNear = 2,
    ESolarSystemLocation_NearWithNoExpeditions = 3,
    ESolarSystemLocation_FromList = 4,
    ESolarSystemLocation_SeasonParty = 5,
};
class cGcScanEventSolarSystemLookup;
class cGcScanEventSolarSystemLookup;
class cGcScanEventTriggers;
class cGcTechnologyCategory;
class cTkTextureResource;
class cGcScannerIconHighlightTypes;
class cGcAudioWwiseEvents;
class cGcResourceElement;

class cGcScanEventData
{
    static const unsigned __int64 muNameHash = 0x7BBBCE7D7BC0F1F4;
    static const unsigned __int64 muTemplateHash = 0x5D2C5B4A197F412A;
    static const int miNumMembers = 55;

    TkID<256> mName;
    TkID<256> mForceInteraction;
    cGcInteractionType mForceInteractionType;
    cGcAlienRace mRequireInteractionRace;
    bool mbForceBroken;
    bool mbForceFixed;
    bool mbForceOverridesAll;
    TkID<128> mForceOverrideEncounter;
    bool mbIsCommunityPortalOverride;
    bool mbClearForcedInteractionOnCompletion;
    float mfBuildingPreventionRadius;
    bool mbUseMissionTradingDataOverride;
    bool mbAlwaysShow;
    bool mbNeverShow;
    bool mbShowOnlyIfSequenceTarget;
    TkID<256> mPlanetLabelText;
    float mfSurveyDistance;
    TkID<256> mSurveyDiscoveryOSDMessage;
    eEventStartType meEventStartType;
    eEventEndType meEventEndType;
    eEventPriority meEventPriority;
    bool mbCanEndFromOutsideMission;
    bool mbDisableMultiplayerSync;
    bool mbReplaceEventIfAlreadyActive;
    eBuildingLocation meBuildingLocation;
    eBuildingType meBuildingType;
    cGcBuildingClassification mBuildingClass;
    bool mbAllowFriendsBases;
    bool mbForceWideRandom;
    bool mbMustFindSystem;
    bool mbAllowOverriddenBuildings;
    eSolarSystemLocation meSolarSystemLocation;
    cGcScanEventSolarSystemLookup mSolarSystemAttributes;
    cGcScanEventSolarSystemLookup mSolarSystemAttributesFallback;
    bool mbForceRestartInteraction;
    TkID<128> mHasReward;
    TkID<256> mNextOption;
    cGcScanEventTriggers mTriggerActions;
    cTkDynamicArray<cTkFixedString<256,char> > maUAsList;
    cGcTechnologyCategory mTechShopType;
    cTkFixedString<32,char> macOSDMessage;
    cTkFixedString<32,char> macInterstellarOSDMessage;
    cTkFixedString<32,char> macMarkerLabel;
    cTkTextureResource mMarkerIcon;
    cGcScannerIconHighlightTypes mMissionMarkerHighlightStyleOverride;
    float mfStartTime;
    float mfMessageTime;
    float mfMessageDisplayTime;
    cGcAudioWwiseEvents mMessageAudio;
    float mfIconTime;
    float mfTooltipTime;
    bool mbTooltipRepeats;
    bool mbShowEndTooltip;
    cTkFixedString<32,char> macTooltipMessage;
    cGcResourceElement mResourceOverride;

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
