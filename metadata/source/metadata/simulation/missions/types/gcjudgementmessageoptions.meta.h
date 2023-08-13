#pragma once
#include "../../../../../../../../pch.h"

class cGcJudgementMessageOptions
{
    static const unsigned __int64 muNameHash = 0x8A1CA9D7910E2ABB;
    static const unsigned __int64 muTemplateHash = 0x8ED76BBC5E9E0941;
    static const int miNumMembers = 3;

    cTkFixedString<128,char> macMessageInSettlement;
    cTkFixedString<128,char> macMessageInSettlementSystem;
    cTkFixedString<128,char> macMessageOutOfSettlementSystem;

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
