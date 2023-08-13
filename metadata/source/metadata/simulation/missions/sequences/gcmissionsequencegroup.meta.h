#pragma once
#include "../../../../../../../../pch.h"

class cTkTextureResource;
class cGcMissionPageHint;
class cGcMissionCategory;
class cGcMissionConditionTest;

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
class cTkInputEnum;
class cGcObjectiveTextFormatOptions;
class cGcTargetMissionSurveyOptions;
class cGcCustomNotifyTimerOptions;

class cGcMissionSequenceGroup
{
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
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
