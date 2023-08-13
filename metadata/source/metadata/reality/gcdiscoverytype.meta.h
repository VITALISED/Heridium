#pragma once
#include "../../../../../../pch.h"

enum eDiscoveryType
{
    EDiscoveryType_Unknown = 0,
    EDiscoveryType_SolarSystem = 1,
    EDiscoveryType_Planet = 2,
    EDiscoveryType_Animal = 3,
    EDiscoveryType_Flora = 4,
    EDiscoveryType_Mineral = 5,
    EDiscoveryType_Sector = 6,
    EDiscoveryType_Building = 7,
    EDiscoveryType_Interactable = 8,
    EDiscoveryType_Sentinel = 9,
    EDiscoveryType_Starship = 10,
    EDiscoveryType_Artifact = 11,
    EDiscoveryType_Mystery = 12,
    EDiscoveryType_Treasure = 13,
    EDiscoveryType_Control = 14,
    EDiscoveryType_HarvestPlant = 15,
    EDiscoveryType_FriendlyDrone = 16,
};

class cGcDiscoveryType
{
    static const unsigned __int64 muNameHash = 0x5BB97397B6B70C3A;
    static const unsigned __int64 muTemplateHash = 0x9066D5BF2A5AAA32;
    static const int miNumMembers = 1;

    eDiscoveryType meDiscoveryType;

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
