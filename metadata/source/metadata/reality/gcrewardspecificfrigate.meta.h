#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/reality/gcfrigateclass.meta.h"
#include "../../../../metadata/source/metadata/reality/gcalienrace.meta.h"

class cGcRewardSpecificFrigate
{
public:
    static const unsigned __int64 muNameHash = 0xB9F3B9FAC994498B;
    static const unsigned __int64 muTemplateHash = 0x1643846F26B79DF3;
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
    static void ClassPointerFix(cTkClassPointer* lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
