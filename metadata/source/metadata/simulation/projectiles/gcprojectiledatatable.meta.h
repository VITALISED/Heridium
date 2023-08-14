#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/source/metadata/simulation/projectiles/gcprojectiledata.meta.h"
#include "../../../../../metadata/source/metadata/simulation/projectiles/gclaserbeamdata.meta.h"

class cGcProjectileDataTable
{
public:
    static const unsigned __int64 muNameHash = 0x9439AD97E8673BC0;
    static const unsigned __int64 muTemplateHash = 0x809F465FC44C1F18;
    static const int miNumMembers = 2;

    cTkDynamicArray<cGcProjectileData> maTable;
    cTkDynamicArray<cGcLaserBeamData> maLasers;

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
