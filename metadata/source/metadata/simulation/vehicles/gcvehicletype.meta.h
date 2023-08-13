#pragma once

#include "../../../../../../../pch.h"
enum eVehicleType
{
    EVehicleType_Buggy = 0,
    EVehicleType_Bike = 1,
    EVehicleType_Truck = 2,
    EVehicleType_WheeledBike = 3,
    EVehicleType_Hovercraft = 4,
    EVehicleType_Submarine = 5,
    EVehicleType_Mech = 6,
};

class cGcVehicleType
{
    static const unsigned __int64 muNameHash = 5080391358129349773;
    static const unsigned __int64 muTemplateHash = 5137867919843439233;
    static const int miNumMembers = 1;

    eVehicleType meVehicleType;

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
