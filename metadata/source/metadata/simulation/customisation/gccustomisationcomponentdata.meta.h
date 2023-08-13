#pragma once

#include "../../../../../../../pch.h"
enum eCustomisationDataType
{
    ECustomisationDataType_Player = 0,
    ECustomisationDataType_Vehicle = 1,
    ECustomisationDataType_Weapon = 2,
    ECustomisationDataType_Ship_01 = 3,
    ECustomisationDataType_Ship_02 = 4,
    ECustomisationDataType_Ship_03 = 5,
    ECustomisationDataType_Ship_04 = 6,
    ECustomisationDataType_Ship_05 = 7,
    ECustomisationDataType_Ship_06 = 8,
    ECustomisationDataType_Vehicle_Bike = 9,
    ECustomisationDataType_Vehicle_Truck = 10,
    ECustomisationDataType_Vehicle_WheeledBike = 11,
    ECustomisationDataType_Vehicle_Hovercraft = 12,
    ECustomisationDataType_Vehicle_Submarine = 13,
    ECustomisationDataType_Vehicle_Mech = 14,
    ECustomisationDataType_Freighter = 15,
    ECustomisationDataType_Pet = 16,
    ECustomisationDataType_Ship_07 = 17,
    ECustomisationDataType_Ship_08 = 18,
    ECustomisationDataType_Ship_09 = 19,
    ECustomisationDataType_Ship_10 = 20,
    ECustomisationDataType_Ship_11 = 21,
    ECustomisationDataType_Ship_12 = 22,
};

class cGcCustomisationComponentData
{
    static const unsigned __int64 muNameHash = 5958359709116889797;
    static const unsigned __int64 muTemplateHash = 15288551434539624831;
    static const int miNumMembers = 1;

    eCustomisationDataType meCustomisationDataType;

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
