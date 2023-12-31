#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/source/metadata/simulation/ecosystem/gcecosystemcreaturedata.meta.h"

class cGcEcosystemSpawnData
{
public:
    static const unsigned __int64 muNameHash = 0xB2F82AE85A5CD5EE;
    static const unsigned __int64 muTemplateHash = 0x7B710B6ECC0C1CD5;
    static const int miNumMembers = 3;

    cTkDynamicArray<cGcEcosystemCreatureData> maCreatures;
    float mfCreatureMinNoise;
    float mfCreatureMaxNoise;

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
