#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/gamestate/gcuniverseaddressdata.meta.h"

enum eTeleporterType
{
    ETeleporterType_Base = 0,
    ETeleporterType_Spacestation = 1,
    ETeleporterType_Atlas = 2,
    ETeleporterType_PlanetAwayFromShip = 3,
    ETeleporterType_ExternalBase = 4,
    ETeleporterType_EmergencyGalaxyFix = 5,
    ETeleporterType_OnNexus = 6,
    ETeleporterType_SpacestationFixPosition = 7,
    ETeleporterType_Settlement = 8,
    ETeleporterType_Freighter = 9,
    ETeleporterType_Frigate = 10,
};

class cGcTeleportEndpoint
{
public:
    static const unsigned __int64 muNameHash = 0x18CD621AAAB1F01D;
    static const unsigned __int64 muTemplateHash = 0xEA4F0B98C8572FC;
    static const int miNumMembers = 7;

    cGcUniverseAddressData mUniverseAddress;
    cTkVector3 mPosition;
    cTkVector3 mFacing;
    eTeleporterType meTeleporterType;
    cTkFixedString<64,char> macName;
    bool mbCalcWarpOffset;
    bool mbIsFeatured;

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
