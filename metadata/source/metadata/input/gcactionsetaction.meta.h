#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/input/gcactionusetype.meta.h"
#include "../../../../metadata/toolkit/metadata/utilities/input/actions/gcinputactions.meta.h"

class cGcActionSetAction
{
public:
    static const unsigned __int64 muNameHash = 0xF69368BA4545C60E;
    static const unsigned __int64 muTemplateHash = 0xDA8E64ABBB9ABBC9;
    static const int miNumMembers = 2;

    cGcActionUseType mStatus;
    cGcInputActions mAction;

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
