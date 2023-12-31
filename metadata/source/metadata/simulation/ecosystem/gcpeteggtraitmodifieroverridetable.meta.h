#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/source/metadata/simulation/ecosystem/gcpeteggtraitmodifieroverridedata.meta.h"

class cGcPetEggTraitModifierOverrideTable
{
public:
    static const unsigned __int64 muNameHash = 0x34EE54AA314E3EDF;
    static const unsigned __int64 muTemplateHash = 0xDD6DC714025C8150;
    static const int miNumMembers = 1;

    cTkDynamicArray<cGcPetEggTraitModifierOverrideData> maTraitModifiers;

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
