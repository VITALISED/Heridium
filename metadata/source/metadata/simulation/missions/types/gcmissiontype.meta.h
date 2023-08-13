#pragma once
#include "../../../../../../../../pch.h"

enum eMissionType
{
    EMissionType_SpaceCombat = 0,
    EMissionType_GroundCombat = 1,
    EMissionType_Research = 2,
    EMissionType_MissingPerson = 3,
    EMissionType_Repair = 4,
    EMissionType_Cargo = 5,
    EMissionType_Piracy = 6,
    EMissionType_Photo = 7,
    EMissionType_Feeding = 8,
    EMissionType_Planting = 9,
    EMissionType_Construction = 10,
};

class cGcMissionType
{
    static const unsigned __int64 muNameHash = 0x881C97F393A2FB50;
    static const unsigned __int64 muTemplateHash = 0x764185355E2FCC4B;
    static const int miNumMembers = 1;

    eMissionType meMissionType;

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
