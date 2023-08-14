#pragma once
#include "../../../../../../pch.h"

#include "../../../../../../metadata/source/metadata/reality/gcrealitycommonfactions.meta.h"
#include "../../../../../../metadata/source/metadata/simulation/spaceship/ai/gcaispaceshippreloadcachedata.meta.h"

class cGcAISpaceshipPreloadList
{
public:
    static const unsigned __int64 muNameHash = 0xC546551B048ACC33;
    static const unsigned __int64 muTemplateHash = 0x4531553B105E462;
    static const int miNumMembers = 2;

    cGcRealityCommonFactions mFaction;
    cTkDynamicArray<cGcAISpaceshipPreloadCacheData> maCache;

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
