#pragma once

#include "../../../../../../pch.h"
class cGcPlayerExperienceAsteroidCreatureSpawnTable
{
    static const unsigned __int64 muNameHash = 14168296827058814710;
    static const unsigned __int64 muTemplateHash = 87405655401831021;
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
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
