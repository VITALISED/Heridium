#pragma once
#include "../../../../pch.h"

enum eTeleporterDestinationType
{
    ETeleporterDestinationType_Base = 0,
    ETeleporterDestinationType_Spacestation = 1,
    ETeleporterDestinationType_Atlas = 2,
    ETeleporterDestinationType_PlanetAwayFromShip = 3,
    ETeleporterDestinationType_ExternalBase = 4,
    ETeleporterDestinationType_EmergencyGalaxyFix = 5,
    ETeleporterDestinationType_OnNexus = 6,
    ETeleporterDestinationType_SpacestationFixPosition = 7,
    ETeleporterDestinationType_Settlement = 8,
    ETeleporterDestinationType_Freighter = 9,
};

class cGcTeleporterType
{
public:
    static const unsigned __int64 muNameHash = 0xECE6F42F8A522B34;
    static const unsigned __int64 muTemplateHash = 0xC9A0D4A857566650;
    static const int miNumMembers = 1;

    eTeleporterDestinationType meTeleporterDestinationType;

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
