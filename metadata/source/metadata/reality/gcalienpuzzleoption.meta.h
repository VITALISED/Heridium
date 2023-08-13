#pragma once

#include "../../../../../../pch.h"
class cGcAlienMood;
class cGcNPCPropType;
class cGcAudioWwiseEvents;
class cGcMissionConditionTest;
class cgcwordcategorytableEnum;

class cGcAlienPuzzleOption
{
    static const unsigned __int64 muNameHash = 4605039464286305897;
    static const unsigned __int64 muTemplateHash = 16580537351311992226;
    static const int miNumMembers = 21;

    TkID<256> mName;
    TkID<256> mText;
    bool mbIsAlien;
    TkID<128> mCost;
    cTkDynamicArray<TkID<128> > maRewards;
    cGcAlienMood mMood;
    cGcNPCPropType mProp;
    bool mbOverrideWithAlienWord;
    bool mbReseedInteractionOnUse;
    bool mbKeepOpen;
    bool mbDisplayCost;
    bool mbTruncateCost;
    bool mbMarkInteractionComplete;
    TkID<256> mNextInteraction;
    bool mbSelectedOnBackOut;
    cGcAudioWwiseEvents mAudioEvent;
    TkID<256> mTitleOverride;
    cGcMissionConditionTest mEnablingConditionTest;
    cTkDynamicArray<cTkClassPointer> maEnablingConditions;
    TkID<256> mEnablingConditionId;
    cgcwordcategorytableEnum mWordCategory;

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
