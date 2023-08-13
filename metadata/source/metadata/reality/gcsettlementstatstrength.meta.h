#pragma once
#include "../../../../../../pch.h"

enum eSettlementStatStrength
{
    ESettlementStatStrength_PositiveWide = 0,
    ESettlementStatStrength_PositiveLarge = 1,
    ESettlementStatStrength_PositiveMedium = 2,
    ESettlementStatStrength_PositiveSmall = 3,
    ESettlementStatStrength_NegativeSmall = 4,
    ESettlementStatStrength_NegativeMedium = 5,
    ESettlementStatStrength_NegativeLarge = 6,
};

class cGcSettlementStatStrength
{
    static const unsigned __int64 muNameHash = 0x3B7C404C59D201EF;
    static const unsigned __int64 muTemplateHash = 0x36C7F6656EB4C5C0;
    static const int miNumMembers = 1;

    eSettlementStatStrength meSettlementStatStrength;

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
