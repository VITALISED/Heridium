#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/source/metadata/simulation/npcs/gcnpcsettlementbehaviourentry.meta.h"

class cGcNPCSettlementBehaviourData
{
public:
    static const unsigned __int64 muNameHash = 0x87BC5043F293743D;
    static const unsigned __int64 muTemplateHash = 0x59E06023F9468849;
    static const int miNumMembers = 2;

    cGcNPCSettlementBehaviourEntry mBaseBehaviour;
    cTkFixedArray<cGcNPCSettlementBehaviourEntry, 5> maBehaviourOverrides;

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
