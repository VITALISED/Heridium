#pragma once
#include "../../../../../../pch.h"

enum eMedalType
{
    EMedalType_Standings = 0,
    EMedalType_Missions = 1,
    EMedalType_Words = 2,
    EMedalType_Systems = 3,
    EMedalType_Sentinels = 4,
    EMedalType_Pirates = 5,
    EMedalType_Plants = 6,
    EMedalType_Units = 7,
    EMedalType_RaceCreatures = 8,
    EMedalType_DistanceWarped = 9,
};

class cGcJourneyMedalType
{
    static const unsigned __int64 muNameHash = 0x50569DD5AA245CF0;
    static const unsigned __int64 muTemplateHash = 0xE4FDDBB5F69B5771;
    static const int miNumMembers = 1;

    eMedalType meMedalType;

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
