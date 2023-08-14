#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/toolkit/metadata/utilities/input/actions/gcinputactionmapping.meta.h"
#include "../../../../metadata/toolkit/metadata/utilities/input/actions/gcinputactionmapping2.meta.h"

class cTkGameSettings
{
public:
    static const unsigned __int64 muNameHash = 0x18F53DCA811C8E56;
    static const unsigned __int64 muTemplateHash = 0x64289A7C149B1115;
    static const int miNumMembers = 2;

    cTkDynamicArray<cGcInputActionMapping> maKeyMapping;
    cTkDynamicArray<cGcInputActionMapping2> maKeyMapping2;

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
