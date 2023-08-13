#pragma once
#include "../../../../../../pch.h"

enum eTechnologyCategory
{
    ETechnologyCategory_Ship = 0,
    ETechnologyCategory_Weapon = 1,
    ETechnologyCategory_Suit = 2,
    ETechnologyCategory_Personal = 3,
    ETechnologyCategory_All = 4,
    ETechnologyCategory_None = 5,
    ETechnologyCategory_Freighter = 6,
    ETechnologyCategory_Maintenance = 7,
    ETechnologyCategory_Exocraft = 8,
    ETechnologyCategory_Submarine = 9,
    ETechnologyCategory_Mech = 10,
    ETechnologyCategory_AllVehicles = 11,
    ETechnologyCategory_AlienShip = 12,
    ETechnologyCategory_AllShips = 13,
};

class cGcTechnologyCategory
{
    static const unsigned __int64 muNameHash = 0xA5FDDD239156B452;
    static const unsigned __int64 muTemplateHash = 0xE7799F4552A81DC2;
    static const int miNumMembers = 1;

    eTechnologyCategory meTechnologyCategory;

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
