#pragma once
#include "../../../../../../../pch.h"

enum eSentinelType
{
    ESentinelType_PatrolDrone = 0,
    ESentinelType_CombatDrone = 1,
    ESentinelType_MedicDrone = 2,
    ESentinelType_SummonerDrone = 3,
    ESentinelType_CorruptedDrone = 4,
    ESentinelType_Quad = 5,
    ESentinelType_Mech = 6,
    ESentinelType_Walker = 7,
    ESentinelType_FriendlyDrone = 8,
};

class cGcSentinelTypes
{
    static const unsigned __int64 muNameHash = 0x4C87DB0C59434DB3;
    static const unsigned __int64 muTemplateHash = 0x3F0158EC0BC49377;
    static const int miNumMembers = 1;

    eSentinelType meSentinelType;

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
