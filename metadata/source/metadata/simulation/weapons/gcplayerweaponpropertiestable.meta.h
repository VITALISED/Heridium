#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/source/metadata/simulation/weapons/gccamouflagedata.meta.h"
#include "../../../../../metadata/source/metadata/simulation/weapons/gcplayerweaponpropertiesdata.meta.h"

class cGcPlayerWeaponPropertiesTable
{
public:
    static const unsigned __int64 muNameHash = 0xD90787619164B12C;
    static const unsigned __int64 muTemplateHash = 0xAB7A82C834E35D0C;
    static const int miNumMembers = 2;

    cGcCamouflageData mCamouflageData;
    cTkFixedArray<cGcPlayerWeaponPropertiesData, 19> maPropertiesData;

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
