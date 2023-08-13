#pragma once
#include "../../../../../../pch.h"

enum eSettlementConstructionLevel
{
    ESettlementConstructionLevel_Start = 0,
    ESettlementConstructionLevel_GroundStorey = 1,
    ESettlementConstructionLevel_RegularStorey = 2,
    ESettlementConstructionLevel_Roof = 3,
    ESettlementConstructionLevel_Decoration = 4,
    ESettlementConstructionLevel_Other = 5,
};

class cGcSettlementConstructionLevel
{
    static const unsigned __int64 muNameHash = 0x69E9FB65CE773F84;
    static const unsigned __int64 muTemplateHash = 0xA96B50DDF3B522E4;
    static const int miNumMembers = 1;

    eSettlementConstructionLevel meSettlementConstructionLevel;

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
