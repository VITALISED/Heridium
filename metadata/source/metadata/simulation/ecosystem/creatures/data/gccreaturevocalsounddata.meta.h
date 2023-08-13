#pragma once

#include "../../../../../../../../../pch.h"
enum eVocalEmote
{
    EVocalEmote_EmoteIdle = 0,
    EVocalEmote_EmoteFlee = 1,
    EVocalEmote_EmoteAggression = 2,
    EVocalEmote_EmoteRoar = 3,
    EVocalEmote_EmotePain = 4,
    EVocalEmote_EmoteAttack = 5,
    EVocalEmote_EmoteDie = 6,
    EVocalEmote_EmoteMiniRoarNeutral = 7,
    EVocalEmote_EmoteMiniRoarHappy = 8,
    EVocalEmote_EmoteMiniRoarAngry = 9,
};

class cGcCreatureVocalSoundData
{
    static const unsigned __int64 muNameHash = 9216358710224836127;
    static const unsigned __int64 muTemplateHash = 16547968997857653685;
    static const int miNumMembers = 7;

    TkID<128> mId;
    eVocalEmote meVocalEmote;
    float mfPlayFrequency;
    float mfMinCooldown;
    float mfMaxCooldown;
    bool mbPlayImmediately;
    bool mbPlayOnlyOnce;

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
