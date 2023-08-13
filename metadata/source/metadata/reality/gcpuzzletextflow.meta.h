#pragma once
#include "../../../../../../pch.h"

class cGcAlienMood;

enum eTranslateAlienTextOverride
{
    ETranslateAlienTextOverride_None = 0,
    ETranslateAlienTextOverride_Translate = 1,
    ETranslateAlienTextOverride_DoNotTranslate = 2,
};

enum eBracketsOverride
{
    EBracketsOverride_None = 0,
    EBracketsOverride_Brackets = 1,
    EBracketsOverride_NoBrackets = 2,
};
class cGcAudioWwiseEvents;

class cGcPuzzleTextFlow
{
    static const unsigned __int64 muNameHash = 0x44CB81CE83D73B16;
    static const unsigned __int64 muTemplateHash = 0x6322BA74C87A2DBB;
    static const int miNumMembers = 8;

    TkID<256> mText;
    bool mbIsAlien;
    TkID<256> mTitle;
    cGcAlienMood mMood;
    eTranslateAlienTextOverride meTranslateAlienTextOverride;
    eBracketsOverride meBracketsOverride;
    cGcAudioWwiseEvents mAudioEvent;
    bool mbShowHologram;

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
