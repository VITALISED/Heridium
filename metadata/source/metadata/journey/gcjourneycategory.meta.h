#pragma once
#include "pch.h"

class cGcJourneyCategoryType;
class cGcGameMode;
class cGcMissionFaction;
class cTkTextureResource;
class cTkTextureResource;

class cGcJourneyCategory
{
public:
    static const unsigned __int64 muNameHash = 0x88F1E142115EF824;
    static const unsigned __int64 muTemplateHash = 0x6B7881FEB05B98C6;
    static const int miNumMembers = 9;

    cGcJourneyCategoryType mType;
    cGcGameMode mGameModeRestriction;
    cGcMissionFaction mFaction;
    TkID<256> mNameIDLower;
    TkID<256> mNameIDUpper;
    TkID<256> mDescriptionID;
    cTkTextureResource mIconOn;
    cTkTextureResource mIconOff;
    cTkDynamicArray<cGcJourneyMedal1> maMedals;

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
