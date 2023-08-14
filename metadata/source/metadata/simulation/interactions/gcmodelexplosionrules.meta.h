#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/source/metadata/simulation/interactions/gcmodelexplosionrule.meta.h"

class cGcModelExplosionRules
{
public:
    static const unsigned __int64 muNameHash = 0xD04C1E382833D93A;
    static const unsigned __int64 muTemplateHash = 0x4251055E922DDCF4;
    static const int miNumMembers = 3;

    cTkDynamicArray<cGcModelExplosionRule> maRules;
    cTkFixedArray<bool, 9> maUseRules;
    cTkFixedArray<float, 9> maShipSalvageDisplayScales;

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
