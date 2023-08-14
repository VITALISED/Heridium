#pragma once
#include "../../../../../pch.h"

enum eGalaxyMarkerType
{
    EGalaxyMarkerType_StartingLocation = 0,
    EGalaxyMarkerType_Home = 1,
    EGalaxyMarkerType_Waypoint = 2,
    EGalaxyMarkerType_Contact = 3,
    EGalaxyMarkerType_Blackhole = 4,
    EGalaxyMarkerType_AtlasStation = 5,
    EGalaxyMarkerType_Selection = 6,
    EGalaxyMarkerType_PlanetBase = 7,
    EGalaxyMarkerType_Visited = 8,
    EGalaxyMarkerType_ScanEvent = 9,
    EGalaxyMarkerType_Expedition = 10,
    EGalaxyMarkerType_NetworkPlayer = 11,
    EGalaxyMarkerType_Freighter = 12,
    EGalaxyMarkerType_PathIcon = 13,
    EGalaxyMarkerType_SeasonParty = 14,
    EGalaxyMarkerType_Settlement = 15,
};

class cGcGalaxyMarkerTypes
{
public:
    static const unsigned __int64 muNameHash = 0x29324EF951272232;
    static const unsigned __int64 muTemplateHash = 0x7B7270127FD40BB2;
    static const int miNumMembers = 1;

    eGalaxyMarkerType meGalaxyMarkerType;

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
