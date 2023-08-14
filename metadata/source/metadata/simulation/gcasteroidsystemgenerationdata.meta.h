#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/simulation/gcasteroidgenerationdata.meta.h"

class cGcAsteroidSystemGenerationData
{
public:
    static const unsigned __int64 muNameHash = 0x6D874860E2F7237A;
    static const unsigned __int64 muTemplateHash = 0x58D85EFD3CD1B909;
    static const int miNumMembers = 4;

    cGcAsteroidGenerationData mCommonAsteroidData;
    cGcAsteroidGenerationData mRingAsteroidData;
    cGcAsteroidGenerationData mLargeAsteroidData;
    cGcAsteroidGenerationData mRareAsteroidData;

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
