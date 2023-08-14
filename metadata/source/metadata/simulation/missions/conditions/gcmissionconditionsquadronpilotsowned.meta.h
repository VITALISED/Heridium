#pragma once
#include "../../../../../../pch.h"

#include "../../../../../../metadata/toolkit/metadata/tkequalityenum.meta.h"

class cGcMissionConditionSquadronPilotsOwned
{
public:
    static const unsigned __int64 muNameHash = 0x8984A8784D46EE5F;
    static const unsigned __int64 muTemplateHash = 0xA18A3B2161D7E0C6;
    static const int miNumMembers = 3;

    int miAmount;
    cTkEqualityEnum mTest;
    bool mbTakeNumberFromSeasonData;

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
