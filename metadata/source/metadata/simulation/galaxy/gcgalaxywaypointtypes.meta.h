#pragma once
#include "pch.h"

enum eGalaxyWaypointType
{
    EGalaxyWaypointType_User = 0,
    EGalaxyWaypointType_Gameplay_AtlasStation = 1,
    EGalaxyWaypointType_Gameplay_DistressBeacon = 2,
    EGalaxyWaypointType_Gameplay_BlackHole = 3,
    EGalaxyWaypointType_Gameplay_Mission = 4,
    EGalaxyWaypointType_Gameplay_SeasonParty = 5,
};

class cGcGalaxyWaypointTypes
{
public:
    static const unsigned __int64 muNameHash = 0xF808614547AF2B25;
    static const unsigned __int64 muTemplateHash = 0x35632D9AFE0F476F;
    static const int miNumMembers = 1;

    eGalaxyWaypointType meGalaxyWaypointType;

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
