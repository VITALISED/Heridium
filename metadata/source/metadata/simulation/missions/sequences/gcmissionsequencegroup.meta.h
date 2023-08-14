#pragma once
#include "../../../../../../pch.h"

#include "../../../../../../metadata/toolkit/metadata/tktextureresource.meta.h"
#include "../../../../../../metadata/source/metadata/simulation/missions/types/gcmissionpagehint.meta.h"
#include "../../../../../../metadata/source/metadata/simulation/missions/types/gcmissioncategory.meta.h"
#include "../../../../../../metadata/source/metadata/simulation/missions/types/gcmissionconditiontest.meta.h"

enum eRepeatLogic
{
    ERepeatLogic_None = 0,
    ERepeatLogic_Loop = 1,
    ERepeatLogic_RestartOnConditionFail = 2,
};

enum eIconStyle
{
    EIconStyle_Default = 0,
    EIconStyle_Large = 1,
    EIconStyle_Square = 2,
    EIconStyle_NoFrame = 3,
};
#include "../../../../../../metadata/toolkit/metadata/utilities/data/tkinputenum.meta.h"
#include "../../../../../../metadata/source/metadata/simulation/missions/gcobjectivetextformatoptions.meta.h"
#include "../../../../../../metadata/source/metadata/simulation/missions/gctargetmissionsurveyoptions.meta.h"
#include "../../../../../../metadata/source/metadata/simulation/missions/gccustomnotifytimeroptions.meta.h"
#include "../../../../../../metadata/source/metadata/simulation/missions/gcgenericmissionstage.meta.h"

class cGcMissionSequenceGroup
{
public:
    static const unsigned __int64 muNameHash = 0x51B3554FFBEBED66;
    static const unsigned __int64 muTemplateHash = 0xB370FD96C3A251EC;
    static const int miNumMembers = 27;

    bool mbSilent;
    cTkTextureResource mIcon;
    cGcMissionPageHint mPageHint;
    TkID<256> mPageDataLocID;
    TkID<128> mBuildMenuHint;
    TkID<128> mInventoryHint;
    cTkFixedString<128,char> macDebugText;
    TkID<256> mObjectiveID;
    TkID<256> mObjectiveTipID;
    bool mbHasCategoryOverride;
    cGcMissionCategory mOverrideCategory;
    bool mbHasColourOverride;
    cTkColour mColourOverride;
    bool mbPrefixTitle;
    TkID<256> mPrefixTitleText;
    bool mbBlockPinning;
    cGcMissionConditionTest mConditionTest;
    bool mbHideFromLogIfConditionsMet;
    eRepeatLogic meRepeatLogic;
    eIconStyle meIconStyle;
    cTkInputEnum mSpecialButtonIcon;
    cGcObjectiveTextFormatOptions mObjectiveFormatting;
    cGcTargetMissionSurveyOptions mSurveyTarget;
    cGcCustomNotifyTimerOptions mCustomNotifyTimers;
    cTkDynamicArray<cTkClassPointer> maConditions;
    cTkDynamicArray<cTkClassPointer> maConsequences;
    cTkDynamicArray<cGcGenericMissionStage> maStages;

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
