#pragma once
#include "../../../../../../pch.h"

enum eSettlementJudgementType
{
    ESettlementJudgementType_None = 0,
    ESettlementJudgementType_StrangerVisit = 1,
    ESettlementJudgementType_Policy = 2,
    ESettlementJudgementType_NewBuilding = 3,
    ESettlementJudgementType_BuildingChoice = 4,
    ESettlementJudgementType_Conflict = 5,
    ESettlementJudgementType_Request = 6,
};

class cGcSettlementJudgementType
{
    static const unsigned __int64 muNameHash = 0x9B6A014776B1F8BB;
    static const unsigned __int64 muTemplateHash = 0xBCAE176B666C6AF7;
    static const int miNumMembers = 1;

    eSettlementJudgementType meSettlementJudgementType;

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
