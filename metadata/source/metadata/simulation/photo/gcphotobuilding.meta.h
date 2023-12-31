#pragma once
#include "../../../../../pch.h"

enum ePhotoBuildingType
{
    EPhotoBuildingType_Shelter = 0,
    EPhotoBuildingType_Abandoned = 1,
    EPhotoBuildingType_Shop = 2,
    EPhotoBuildingType_Outpost = 3,
    EPhotoBuildingType_RadioTower = 4,
    EPhotoBuildingType_Observatory = 5,
    EPhotoBuildingType_Depot = 6,
    EPhotoBuildingType_Monolith = 7,
    EPhotoBuildingType_Factory = 8,
    EPhotoBuildingType_Portal = 9,
    EPhotoBuildingType_Ruin = 10,
    EPhotoBuildingType_MissionTower = 11,
    EPhotoBuildingType_LargeBuilding = 12,
};

class cGcPhotoBuilding
{
public:
    static const unsigned __int64 muNameHash = 0x2535C1B3F76633D;
    static const unsigned __int64 muTemplateHash = 0x27529A5C3BAF0D45;
    static const int miNumMembers = 1;

    ePhotoBuildingType mePhotoBuildingType;

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
