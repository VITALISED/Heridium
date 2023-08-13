#pragma once
#include "../../../../../../../../pch.h"

enum eMissionPlayerLocation
{
    EMissionPlayerLocation_OnPlanet = 0,
    EMissionPlayerLocation_OnPlanetInVehicle = 1,
    EMissionPlayerLocation_InShipLanded = 2,
    EMissionPlayerLocation_InShipInPlanetOrbit = 3,
    EMissionPlayerLocation_InShipInSpace = 4,
    EMissionPlayerLocation_InShipAnywhere = 5,
    EMissionPlayerLocation_InSpaceStation = 6,
    EMissionPlayerLocation_InFreighter = 7,
    EMissionPlayerLocation_InYourFreighter = 8,
    EMissionPlayerLocation_InOtherPlayerFreighter = 9,
    EMissionPlayerLocation_Underground = 10,
    EMissionPlayerLocation_InBuilding = 11,
    EMissionPlayerLocation_Frigate = 12,
    EMissionPlayerLocation_Underwater = 13,
    EMissionPlayerLocation_UnderwaterSwimming = 14,
    EMissionPlayerLocation_DeepUnderwater = 15,
    EMissionPlayerLocation_InSubmarine = 16,
    EMissionPlayerLocation_Frigate_Damaged = 17,
    EMissionPlayerLocation_FreighterConstructionArea = 18,
    EMissionPlayerLocation_FriendsPlanetBase = 19,
    EMissionPlayerLocation_OnPlanetSurface = 20,
    EMissionPlayerLocation_InNexus = 21,
    EMissionPlayerLocation_InNexusOnFoot = 22,
    EMissionPlayerLocation_AbandonedFreighterExterior = 23,
    EMissionPlayerLocation_AbandonedFreighterInterior = 24,
    EMissionPlayerLocation_AbandonedFreighterAirlock = 25,
    EMissionPlayerLocation_AtlasStation = 26,
};

class cGcMissionConditionLocation
{
    static const unsigned __int64 muNameHash = 0x64A394B637C25752;
    static const unsigned __int64 muTemplateHash = 0xF1FF349FCBFB33CA;
    static const int miNumMembers = 1;

    eMissionPlayerLocation meMissionPlayerLocation;

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
