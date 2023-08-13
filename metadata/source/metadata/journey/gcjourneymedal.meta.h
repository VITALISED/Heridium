#pragma once

#include "../../../../../../pch.h"
class cGcStatType;
class cTkTextureResource;
class cTkTextureResource;
class cTkTextureResource;
class cTkTextureResource;

class cGcJourneyMedal
{
    static const unsigned __int64 muNameHash = 3732014250573697792;
    static const unsigned __int64 muTemplateHash = 3067063699189757151;
    static const int miNumMembers = 11;

    TkID<128> mLevelledStatID;
    TkID<256> mMedalTitle;
    TkID<256> mMedalProgressText;
    TkID<256> mPinnedDescription;
    TkID<128> mPinnedMission;
    cGcStatType mStatType;
    bool mbOverallJourneyDummy;
    cTkTextureResource mIconNone;
    cTkTextureResource mIconBronze;
    cTkTextureResource mIconSilver;
    cTkTextureResource mIconGold;

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
