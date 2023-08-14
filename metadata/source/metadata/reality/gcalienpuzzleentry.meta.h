#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/reality/gcalienrace.meta.h"
#include "../../../../metadata/source/metadata/simulation/components/gameplay/gcinteractiontype.meta.h"
#include "../../../../metadata/source/metadata/reality/gcalienpuzzlecategory.meta.h"

enum eAdditionalOptions
{
    EAdditionalOptions_None = 0,
    EAdditionalOptions_LearnWord = 1,
    EAdditionalOptions_SayWord = 2,
};
#include "../../../../metadata/source/metadata/reality/gcalienpuzzleoption.meta.h"
#include "../../../../metadata/source/metadata/reality/gcalienmood.meta.h"
#include "../../../../metadata/source/metadata/simulation/ecosystem/npcs/gcnpcproptype.meta.h"
#include "../../../../metadata/source/metadata/reality/gcpuzzletextflow.meta.h"

enum ePersistancyBufferOverride
{
    EPersistancyBufferOverride_None = 0,
    EPersistancyBufferOverride_AlwaysPersonal = 1,
    EPersistancyBufferOverride_AlwaysFireteam = 2,
};
#include "../../../../metadata/source/metadata/audio/gcaudiowwiseevents.meta.h"

class cGcAlienPuzzleEntry
{
public:
    static const unsigned __int64 muNameHash = 0xDE1F17CE7E01A8C2;
    static const unsigned __int64 muTemplateHash = 0x7922B45DF52C43C3;
    static const int miNumMembers = 24;

    int miProgressionIndex;
    int miMinProgressionForSelection;
    TkID<256> mId;
    cGcAlienRace mRace;
    cGcInteractionType mType;
    cGcAlienPuzzleCategory mCategory;
    eAdditionalOptions meAdditionalOptions;
    TkID<256> mTitle;
    TkID<256> mText;
    TkID<256> mTextAlien;
    bool mbTranslateAlienText;
    bool mbTranslationBrackets;
    bool mbProgressiveDialogue;
    TkID<256> mRequiresScanEvent;
    cTkDynamicArray<cGcAlienPuzzleOption> maOptions;
    cTkDynamicArray<TkID<256> > maAdditionalText;
    cTkDynamicArray<TkID<256> > maAdditionalTextAlien;
    cGcAlienMood mMood;
    cGcNPCPropType mProp;
    cTkDynamicArray<cGcPuzzleTextFlow> maAdvancedInteractionFlow;
    ePersistancyBufferOverride mePersistancyBufferOverride;
    int miCustomFreighterTextIndex;
    bool mbRadialInteraction;
    cGcAudioWwiseEvents mNextStageAudioEventOverride;

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
