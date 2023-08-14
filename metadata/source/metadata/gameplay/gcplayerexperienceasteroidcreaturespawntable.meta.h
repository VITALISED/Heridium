#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/gameplay/gcplayerexperienceasteroidcreaturespawndata.meta.h"

class cGcPlayerExperienceAsteroidCreatureSpawnTable
{
public:
    static const unsigned __int64 muNameHash = 0xC49FE6E5B9227EF6;
    static const unsigned __int64 muTemplateHash = 0x13686FB01961A6D;
    static const int miNumMembers = 6;

    float mfSmallAsteroidSpawnPercent;
    cTkDynamicArray<cGcPlayerExperienceAsteroidCreatureSpawnData> maSmallAsteroidSpawns;
    float mfMediumAsteroidSpawnPercent;
    cTkDynamicArray<cGcPlayerExperienceAsteroidCreatureSpawnData> maMediumAsteroidSpawns;
    float mfLargeAsteroidSpawnPercent;
    cTkDynamicArray<cGcPlayerExperienceAsteroidCreatureSpawnData> maLargeAsteroidSpawns;

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
