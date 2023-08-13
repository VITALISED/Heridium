#pragma once

#include "../../../../../../pch.h"
enum eTeleportRewardType
{
    ETeleportRewardType_None = 0,
    ETeleportRewardType_ToBase = 1,
    ETeleportRewardType_Station0 = 2,
    ETeleportRewardType_Station1 = 3,
    ETeleportRewardType_Station2 = 4,
    ETeleportRewardType_Station3 = 5,
    ETeleportRewardType_Atlas = 6,
};

class cGcRewardTeleport
{
    static const unsigned __int64 muNameHash = 657607317819290839;
    static const unsigned __int64 muTemplateHash = 11469441581894608316;
    static const int miNumMembers = 1;

    eTeleportRewardType meTeleportRewardType;

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
