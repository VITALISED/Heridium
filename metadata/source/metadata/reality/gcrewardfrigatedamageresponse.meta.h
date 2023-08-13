#pragma once
#include "pch.h"

enum eResponse
{
    EResponse_StayOut = 0,
    EResponse_ReturnHome = 1,
    EResponse_CheckForMoreDamage = 2,
    EResponse_ShowDamagedCaptain = 3,
    EResponse_ShowExpeditionCaptain = 4,
    EResponse_AbortExpedition = 5,
};

class cGcRewardFrigateDamageResponse
{
public:
    static const unsigned __int64 muNameHash = 0xFA9A306017ED3640;
    static const unsigned __int64 muTemplateHash = 0xB26B41C33871BBB;
    static const int miNumMembers = 1;

    eResponse meResponse;

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
