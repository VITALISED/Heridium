#pragma once
#include "pch.h"

class cTkTextureResource;
class cTkTextureResource;
class cTkTextureResource;
class cTkTextureResource;
class cTkTextureResource;
class cGcSeasonalMilestoneEncryption;

class cGcSeasonalMilestone
{
public:
    static const unsigned __int64 muNameHash = 0x4EDC167332F6B824;
    static const unsigned __int64 muTemplateHash = 0x5D65FBCDFF91C956;
    static const int miNumMembers = 24;

    TkID<128> mMission;
    TkID<256> mTitle;
    TkID<256> mTitleUpper;
    TkID<256> mDescription;
    TkID<256> mDescriptionDone;
    TkID<256> mCantRewardMessage;
    TkID<128> mIdToUseInMissionData;
    float mfAmount;
    int miStageIndex;
    int miMilestoneIndex;
    int miRendezvousIndex;
    cTkTextureResource mIcon;
    cTkTextureResource mIconGrey;
    cTkTextureResource mMissionIcon;
    cTkTextureResource mMissionIconSelected;
    cTkTextureResource mMissionIconNotSelected;
    TkID<128> mReward;
    TkID<128> mRewardSwitchAlt;
    cTkFixedString<512,char> macRewardDescription;
    cTkFixedString<512,char> macCantClaimRewardDescription;
    bool mbIsOptional;
    bool mbIsRendezvous;
    bool mbIsStageControl;
    cGcSeasonalMilestoneEncryption mEncryption;

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
