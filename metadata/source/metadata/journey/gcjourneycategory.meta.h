#pragma once

#include "../../../../../../pch.h"
class cGcJourneyCategoryType;
class cGcGameMode;
class cGcMissionFaction;
class cTkTextureResource;
class cTkTextureResource;

class cGcJourneyCategory
{
    static const unsigned __int64 muNameHash = 9867915932420995108;
    static const unsigned __int64 muTemplateHash = 7744082490144037062;
    static const int miNumMembers = 9;

    cGcJourneyCategoryType mType;
    cGcGameMode mGameModeRestriction;
    cGcMissionFaction mFaction;
    TkID<256> mNameIDLower;
    TkID<256> mNameIDUpper;
    TkID<256> mDescriptionID;
    cTkTextureResource mIconOn;
    cTkTextureResource mIconOff;
    cTkDynamicArray<cGcJourneyMedal> maMedals;

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
