#pragma once
#include "../../../../../../../pch.h"

#include "../../../../../../../metadata/source/metadata/simulation/ecosystem/creatures/data/gccreaturepetaccessory.meta.h"

class cGcCreaturePetData
{
public:
    static const unsigned __int64 muNameHash = 0x60B2A2CE8774967D;
    static const unsigned __int64 muTemplateHash = 0xD6DEF3B6B7B5062B;
    static const int miNumMembers = 1;

    cTkDynamicArray<cGcCreaturePetAccessory> maAccessorySlots;

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
