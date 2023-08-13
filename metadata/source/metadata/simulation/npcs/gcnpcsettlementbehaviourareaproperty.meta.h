#pragma once

#include "../../../../../../../pch.h"
enum eNPCSettlementBehaviourAreaProperty
{
    ENPCSettlementBehaviourAreaProperty_ContainsPlayer = 0,
    ENPCSettlementBehaviourAreaProperty_ContainsNPCs = 1,
};

class cGcNPCSettlementBehaviourAreaProperty
{
    static const unsigned __int64 muNameHash = 4624500844879741651;
    static const unsigned __int64 muTemplateHash = 6373800134044918815;
    static const int miNumMembers = 1;

    eNPCSettlementBehaviourAreaProperty meNPCSettlementBehaviourAreaProperty;

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