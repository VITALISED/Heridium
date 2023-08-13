#pragma once

#include "../../../../../../../pch.h"
enum eNPCSettlementBehaviourState
{
    ENPCSettlementBehaviourState_Generic = 0,
    ENPCSettlementBehaviourState_Sociable = 1,
    ENPCSettlementBehaviourState_Productive = 2,
    ENPCSettlementBehaviourState_Tired = 3,
    ENPCSettlementBehaviourState_Afraid = 4,
};

class cGcNPCSettlementBehaviourState
{
    static const unsigned __int64 muNameHash = 3923492432071706846;
    static const unsigned __int64 muTemplateHash = 14845909139449528410;
    static const int miNumMembers = 1;

    eNPCSettlementBehaviourState meNPCSettlementBehaviourState;

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
