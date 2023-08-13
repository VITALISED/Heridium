#pragma once

#include "../../../../../../pch.h"
class cGcFrigateClass;
class cGcAlienRace;

class cGcRewardSpecificFrigate
{
    static const unsigned __int64 muNameHash = 13399257803132258699;
    static const unsigned __int64 muTemplateHash = 1604271505199832563;
    static const int miNumMembers = 10;

    cGcFrigateClass mFrigateClass;
    unsigned __int64 mui64FrigateSeed;
    unsigned __int64 mui64SystemSeed;
    cGcAlienRace mAlienRace;
    TkID<256> mNameOverride;
    bool mbIsGift;
    bool mbIsRewardFrigate;
    bool mbFormatAsSeasonal;
    bool mbUseSeedFromCommunicator;
    TkID<128> mPrimaryTrait;

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
