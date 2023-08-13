#pragma once

#include "../../../../../../pch.h"
enum eDestinationSortType
{
    EDestinationSortType_NearestPotal = 0,
    EDestinationSortType_BaseBuildingConnection = 1,
    EDestinationSortType_AbandonedFreighter = 2,
    EDestinationSortType_PortalNearestPlayerShip = 3,
};

class cGcBaseMiniPortalComponentData
{
    static const unsigned __int64 muNameHash = 13528045148302718879;
    static const unsigned __int64 muTemplateHash = 7733230007038552960;
    static const int miNumMembers = 11;

    bool mbAllowVehicles;
    bool mbAllowSpawnedObjects;
    bool mbFlipFacingDirection;
    bool mbSnapFacingDirection;
    float mfSnapFacingAngle;
    bool mbDoPlayerEffects;
    bool mbTeleportCamera;
    int miPowerCost;
    TkID<128> mGroupID;
    TkID<128> mDestinationGroupID;
    eDestinationSortType meDestinationSortType;

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
