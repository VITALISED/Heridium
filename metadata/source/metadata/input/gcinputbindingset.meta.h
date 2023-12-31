#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/input/gcactionsettype.meta.h"
#include "../../../../metadata/source/metadata/input/gcinputbinding.meta.h"

class cGcInputBindingSet
{
public:
    static const unsigned __int64 muNameHash = 0x52AAFE72AAC465AE;
    static const unsigned __int64 muTemplateHash = 0x92F0F711498404A4;
    static const int miNumMembers = 2;

    cGcActionSetType mType;
    cTkDynamicArray<cGcInputBinding> maInputBindings;

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
