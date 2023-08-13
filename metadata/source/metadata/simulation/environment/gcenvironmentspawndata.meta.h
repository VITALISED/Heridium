#pragma once

#include "../../../../../../../pch.h"
class cGcEnvironmentSpawnData
{
    static const unsigned __int64 muNameHash = 1946623248373017548;
    static const unsigned __int64 muTemplateHash = 12068650919320247206;
    static const int miNumMembers = 6;

    cTkDynamicArray<cGcCreatureSpawnData> maCreatures;
    cTkDynamicArray<cGcObjectSpawnData> maDistantObjects;
    cTkDynamicArray<cGcObjectSpawnData> maLandmarks;
    cTkDynamicArray<cGcObjectSpawnData> maObjects;
    cTkDynamicArray<cGcObjectSpawnData> maDetailObjects;
    cTkDynamicArray<cGcSelectableObjectSpawnList> maSelectableObjects;

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
