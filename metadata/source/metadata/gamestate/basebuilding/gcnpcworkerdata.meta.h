#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/source/metadata/utilities/data/gcresourceelement.meta.h"

class cGcNPCWorkerData
{
public:
    static const unsigned __int64 muNameHash = 0xB88BA2B1282BE1C1;
    static const unsigned __int64 muTemplateHash = 0x58BA4D7798D05872;
    static const int miNumMembers = 6;

    cGcResourceElement mResourceElement;
    cTkSeed mInteractionSeed;
    bool mbHiredWorker;
    bool mbFreighterBase;
    unsigned __int64 mui64BaseUA;
    cTkVector4 mBaseOffset;

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
