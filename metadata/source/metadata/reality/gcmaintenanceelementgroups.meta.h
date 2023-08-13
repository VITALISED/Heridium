#pragma once
#include "pch.h"

enum eMaintenanceGroup
{
    EMaintenanceGroup_Custom = 0,
    EMaintenanceGroup_Farming = 1,
    EMaintenanceGroup_Fuelling = 2,
    EMaintenanceGroup_Repairing = 3,
    EMaintenanceGroup_EasyRepairing = 4,
    EMaintenanceGroup_Cleaning = 5,
    EMaintenanceGroup_Frigate = 6,
};

class cGcMaintenanceElementGroups
{
public:
    static const unsigned __int64 muNameHash = 0x38F9072E9DC5078A;
    static const unsigned __int64 muTemplateHash = 0x56884BB3E519A5CC;
    static const int miNumMembers = 1;

    eMaintenanceGroup meMaintenanceGroup;

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
