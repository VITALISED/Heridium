#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/gameplay/gcfiendcrime.meta.h"
#include "../../../../metadata/source/metadata/gameplay/gcfiendcrimespawndata.meta.h"

class cGcFiendCrimeSpawnTable
{
public:
    static const unsigned __int64 muNameHash = 0x4EBB7BDC5EE300EA;
    static const unsigned __int64 muTemplateHash = 0xF11ACFCECBC95ACF;
    static const int miNumMembers = 3;

    cGcFiendCrime mCrime;
    float mfResponseRate;
    cTkDynamicArray<cGcFiendCrimeSpawnData> maSpawns;

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
