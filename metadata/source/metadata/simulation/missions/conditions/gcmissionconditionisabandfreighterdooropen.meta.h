#pragma once
#include "pch.h"

enum eAbandonedFreighterDoorStatus
{
    EAbandonedFreighterDoorStatus_DungeonNotReady = 0,
    EAbandonedFreighterDoorStatus_Locked = 1,
    EAbandonedFreighterDoorStatus_Opening = 2,
    EAbandonedFreighterDoorStatus_Open = 3,
};

class cGcMissionConditionIsAbandFreighterDoorOpen
{
public:
    static const unsigned __int64 muNameHash = 0x337390D414A23798;
    static const unsigned __int64 muTemplateHash = 0x2CE170CA39CB196F;
    static const int miNumMembers = 1;

    eAbandonedFreighterDoorStatus meAbandonedFreighterDoorStatus;

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
