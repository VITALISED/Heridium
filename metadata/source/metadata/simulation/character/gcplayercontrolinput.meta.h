#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/toolkit/metadata/utilities/input/actions/gcinputactions.meta.h"

class cGcPlayerControlInput
{
public:
    static const unsigned __int64 muNameHash = 0xD2873CCA9A0EDD77;
    static const unsigned __int64 muTemplateHash = 0x3195411FB3EE778B;
    static const int miNumMembers = 4;

    bool mbInterceptAllInputs;
    cTkDynamicArray<cGcInputActions> maInterceptInputWhitelist;
    cTkDynamicArray<cGcInputActions> maInterceptInputBlackList;
    cTkDynamicArray<cTkClassPointer> maInputs;

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
