#pragma once
#include "pch.h"

class cGcAlienRace;
class cGcInteractionType;
class cGcAlienPuzzleCategory;

enum eAdditionalOptions
{
    EAdditionalOptions_None = 0,
    EAdditionalOptions_LearnWord = 1,
    EAdditionalOptions_SayWord = 2,
};
class cGcAlienMood;
class cGcNPCPropType;

enum ePersistancyBufferOverride
{
    EPersistancyBufferOverride_None = 0,
    EPersistancyBufferOverride_AlwaysPersonal = 1,
    EPersistancyBufferOverride_AlwaysFireteam = 2,
};
class cGcAudioWwiseEvents;

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
    cTkDynamicArray<cGcAlienPuzzleOption1> maOptions;
    cTkDynamicArray<TkID<256>1> maAdditionalText;
    cTkDynamicArray<TkID<256>1> maAdditionalTextAlien;
    cGcAlienMood mMood;
    cGcNPCPropType mProp;
    cTkDynamicArray<cGcPuzzleTextFlow1> maAdvancedInteractionFlow;
    ePersistancyBufferOverride mePersistancyBufferOverride;
    int miCustomFreighterTextIndex;
    bool mbRadialInteraction;
    cGcAudioWwiseEvents mNextStageAudioEventOverride;

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
