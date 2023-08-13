#pragma once

#include "../../../../../../../pch.h"
enum eInvalidPlacementReason
{
    EInvalidPlacementReason_Offline = 0,
    EInvalidPlacementReason_InvalidBiome = 1,
    EInvalidPlacementReason_InvalidAboveWater = 2,
    EInvalidPlacementReason_InvalidUnderwater = 3,
    EInvalidPlacementReason_PlanetLimitReached = 4,
    EInvalidPlacementReason_BaseLimitReached = 5,
    EInvalidPlacementReason_RegionLimitReached = 6,
    EInvalidPlacementReason_InvalidOverlappingAnyBase = 7,
    EInvalidPlacementReason_InvalidOverlappingSettlement = 8,
    EInvalidPlacementReason_InvalidOverlappingBase = 9,
    EInvalidPlacementReason_OutOfBaseRange = 10,
    EInvalidPlacementReason_OutOfConnectionRange = 11,
    EInvalidPlacementReason_LinkGridMismatch = 12,
    EInvalidPlacementReason_InsufficientResources = 13,
    EInvalidPlacementReason_ComplexityLimitReached = 14,
    EInvalidPlacementReason_SubstanceOnly = 15,
    EInvalidPlacementReason_InvalidPosition = 16,
    EInvalidPlacementReason_InvalidSnap = 17,
    EInvalidPlacementReason_MustPlaceOnTerrain = 18,
    EInvalidPlacementReason_Collision = 19,
    EInvalidPlacementReason_ShipInside = 20,
    EInvalidPlacementReason_PlayerInside = 21,
};

class cGcBuildingPlacementErrorTypes
{
    static const unsigned __int64 muNameHash = 14046256166208624350;
    static const unsigned __int64 muTemplateHash = 13440364220882809644;
    static const int miNumMembers = 1;

    eInvalidPlacementReason meInvalidPlacementReason;

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
