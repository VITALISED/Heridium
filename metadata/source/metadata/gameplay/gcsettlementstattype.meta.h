#pragma once
#include "../../../../pch.h"

enum eSettlementStatType
{
    ESettlementStatType_Population = 0,
    ESettlementStatType_Happiness = 1,
    ESettlementStatType_Production = 2,
    ESettlementStatType_Upkeep = 3,
    ESettlementStatType_Sentinels = 4,
    ESettlementStatType_Debt = 5,
    ESettlementStatType_Alert = 6,
};

class cGcSettlementStatType
{
public:
    static const unsigned __int64 muNameHash = 0x9394F46EDEDBE660;
    static const unsigned __int64 muTemplateHash = 0x7C86AE119BC952DC;
    static const int miNumMembers = 1;

    eSettlementStatType meSettlementStatType;

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
