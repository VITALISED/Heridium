#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/simulation/missions/types/gcmissionfaction.meta.h"

class cGcRewardFactionStanding
{
public:
    static const unsigned __int64 muNameHash = 0x8B79DF642602985A;
    static const unsigned __int64 muTemplateHash = 0x257E7127D990C3BB;
    static const int miNumMembers = 4;

    cGcMissionFaction mFaction;
    int miAmountMin;
    int miAmountMax;
    bool mbSetToMinBeforeAdd;

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
