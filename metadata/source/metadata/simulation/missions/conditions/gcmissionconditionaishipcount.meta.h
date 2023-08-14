#pragma once
#include "../../../../../../pch.h"

#include "../../../../../../metadata/source/metadata/reality/gcrealitycommonfactions.meta.h"
#include "../../../../../../metadata/toolkit/metadata/tkequalityenum.meta.h"

class cGcMissionConditionAIShipCount
{
public:
    static const unsigned __int64 muNameHash = 0xC1D7229530508055;
    static const unsigned __int64 muTemplateHash = 0xE09E786120C0434;
    static const int miNumMembers = 3;

    cGcRealityCommonFactions mType;
    int miCount;
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
