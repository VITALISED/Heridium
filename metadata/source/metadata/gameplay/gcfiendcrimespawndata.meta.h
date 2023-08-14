#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/simulation/ecosystem/creatures/gccreaturetypes.meta.h"

class cGcFiendCrimeSpawnData
{
public:
    static const unsigned __int64 muNameHash = 0x9F76738BACABEAD2;
    static const unsigned __int64 muTemplateHash = 0xDEB0FEF9EC99F1EC;
    static const int miNumMembers = 5;

    cGcCreatureTypes mType;
    float mfMinDist;
    float mfMaxDist;
    cTkFixedArray<int, 4> maMinNum;
    cTkFixedArray<int, 4> maMaxNum;

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
