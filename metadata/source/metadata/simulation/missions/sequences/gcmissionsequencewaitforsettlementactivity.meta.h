#pragma once
#include "../../../../../../../../pch.h"

class cGcMissionSequenceWaitForSettlementActivity
{
    static const unsigned __int64 muNameHash = 0x13DC6DC343F05;
    static const unsigned __int64 muTemplateHash = 0xED92D28584E03751;
    static const int miNumMembers = 6;

    cTkFixedString<128,char> macMessage;
    cTkFixedString<128,char> macMessageWhileBuilding;
    cTkFixedString<128,char> macMessageForVisitor;
    cTkFixedString<128,char> macMessageForConflict;
    cTkFixedString<128,char> macMessageForProposal;
    cTkFixedString<128,char> macDebugText;

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
