#pragma once
#include "../../../../../../pch.h"

#include "../../../../../../metadata/toolkit/metadata/tkequalityenum.meta.h"

class cGcMissionConditionWaitForPirates
{
public:
    static const unsigned __int64 muNameHash = 0x978040CE6A2C247B;
    static const unsigned __int64 muTemplateHash = 0x358310F2D3B8F7E8;
    static const int miNumMembers = 6;

    int miLivingPirates;
    bool mbCountHostileTraders;
    bool mbCompleteOnlyInSpace;
    bool mbCareAboutAttackingPlayer;
    bool mbCheckAllFireteamMembers;
    cTkEqualityEnum mTest;

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
