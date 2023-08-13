#pragma once

#include "../../../../../../pch.h"
enum eEncounterType
{
    EEncounterType_FactoryGuards = 0,
    EEncounterType_HarvesterGuards = 1,
    EEncounterType_ScrapHeap = 2,
    EEncounterType_Reward = 3,
    EEncounterType_CorruptedDroneInteract = 4,
    EEncounterType_GroundWorms = 5,
    EEncounterType_DroneHiveGuards = 6,
};

class cGcEncounterType
{
    static const unsigned __int64 muNameHash = 18407456395508106462;
    static const unsigned __int64 muTemplateHash = 10257560362751890186;
    static const int miNumMembers = 1;

    eEncounterType meEncounterType;

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
