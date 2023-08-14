#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/reality/gcalienmood.meta.h"
#include "../../../../metadata/source/metadata/simulation/ecosystem/npcs/gcnpcproptype.meta.h"
#include "../../../../metadata/source/metadata/audio/gcaudiowwiseevents.meta.h"
#include "../../../../metadata/source/metadata/simulation/missions/types/gcmissionconditiontest.meta.h"
#include "../../../../metadata/source/metadata/reality/tables/gcwordcategorytableenum.meta.h"

class cGcAlienPuzzleOption
{
public:
    static const unsigned __int64 muNameHash = 0x3FE862FE8570BE69;
    static const unsigned __int64 muTemplateHash = 0xE619E6DFA20C25A2;
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
    static void ClassPointerFix(cTkClassPointer* lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
