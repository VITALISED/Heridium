#pragma once
#include "pch.h"

enum eMissionClass
{
    EMissionClass_Primary = 0,
    EMissionClass_Secondary = 1,
    EMissionClass_ChainedSecondary = 2,
    EMissionClass_Guide = 3,
    EMissionClass_Wiki = 4,
    EMissionClass_Seasonal = 5,
    EMissionClass_Milestone = 6,
};
class cGcNumberedTextList;
class cGcNumberedTextList;
class cGcNumberedTextList;
class cGcNumberedTextList;
class cGcNumberedTextList;
class cGcNumberedTextList;
class cGcNumberedTextList;
class cTkTextureResource;
class cTkTextureResource;
class cTkTextureResource;
class cGcMissionCategory;
class cGcMissionPageHint;
class cGcDefaultMissionItemsTable;

enum eMessageComplete
{
    EMessageComplete_Default = 0,
    EMessageComplete_Always = 1,
    EMessageComplete_Never = 2,
};

enum eMessageStart
{
    EMessageStart_Default = 0,
    EMessageStart_Always = 1,
    EMessageStart_Never = 2,
};
class cGcMissionBoardOptions;

enum eAutoStart
{
    EAutoStart_None = 0,
    EAutoStart_AllModes = 1,
    EAutoStart_Seasonal = 2,
    EAutoStart_OnSelected = 3,
};
class cGcAlienPuzzleTable;
class cGcTradeData;
class cGcMissionConditionTest;
class cGcMissionConditionTest;

class cGcGenericMissionSequence
{
public:
    static const unsigned __int64 muNameHash = 0xFAE86B2801335B6D;
    static const unsigned __int64 muTemplateHash = 0xA5D439E96EBCE89D;
    static const int miNumMembers = 55;

    TkID<128> mMissionID;
    eMissionClass meMissionClass;
    bool mbMissionIsCritical;
    cTkFixedString<32,char> macMissionObjective;
    cGcNumberedTextList mMissionTitles;
    cGcNumberedTextList mMissionSubtitles;
    cGcNumberedTextList mMissionDescriptions;
    cTkFixedString<32,char> macMissionDescSwitchOverride;
    cGcNumberedTextList mMissionProcDescriptionHeader;
    cGcNumberedTextList mMissionProcDescriptionA;
    cGcNumberedTextList mMissionProcDescriptionB;
    cGcNumberedTextList mMissionProcDescriptionC;
    bool mbUseScanEventDetailsInLogInfo;
    cTkTextureResource mMissionIcon;
    cTkTextureResource mMissionIconSelected;
    cTkTextureResource mMissionIconNotSelected;
    int miMissionPriority;
    cGcMissionCategory mMissionCategory;
    cGcMissionPageHint mMissionPageHint;
    TkID<256> mMissionPageLocID;
    TkID<128> mMissionBuildMenuHint;
    bool mbMissionHasColourOverride;
    cTkColour mMissionColourOverride;
    int miBeginCheckFrequency;
    cGcDefaultMissionItemsTable mDefaultItems;
    bool mbPrefixTitle;
    TkID<128> mNextMissionHint;
    eMessageComplete meMessageComplete;
    eMessageStart meMessageStart;
    cGcMissionBoardOptions mMissionBoardOptions;
    eAutoStart meAutoStart;
    bool mbRestartOnCompletion;
    bool mbCancelSetsComplete;
    cGcAlienPuzzleTable mDialog;
    cTkDynamicArray<cGcScanEventData1> maScanEvents;
    cTkDynamicArray<cGcGenericRewardTableEntry1> maRewards;
    cTkDynamicArray<cGcCostTableEntry1> maCosts;
    cGcTradeData mTradingDataOverride;
    cGcMissionConditionTest mStartConditionTest;
    cGcMissionConditionTest mCancelConditionTest;
    bool mbStartIsCancel;
    cTkDynamicArray<cTkClassPointer1> maStartingConditions;
    cTkDynamicArray<cTkClassPointer1> maCancelingConditions;
    cTkDynamicArray<cGcGenericMissionVersionProgress1> maFinalStageVersions;
    cTkDynamicArray<cGcGenericMissionStage1> maStages;
    bool mbForcesPageHint;
    bool mbForcesBuildMenuHint;
    bool mbIsProceduralAllowed;
    bool mbIsRecurring;
    bool mbIsLegacy;
    bool mbBlocksPinning;
    bool mbCanRenounce;
    TkID<128> mUseCommunityMissionForLog;
    bool mbTelemetryUpload;
    bool mbUseSeasonTitleOverride;

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
