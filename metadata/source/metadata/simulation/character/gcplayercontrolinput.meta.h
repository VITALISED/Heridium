#pragma once
#include "pch.h"

class cGcPlayerControlInput
{
public:
    static const unsigned __int64 muNameHash = 0xD2873CCA9A0EDD77;
    static const unsigned __int64 muTemplateHash = 0x3195411FB3EE778B;
    static const int miNumMembers = 4;

    bool mbInterceptAllInputs;
    cTkDynamicArray<cGcInputActions1> maInterceptInputWhitelist;
    cTkDynamicArray<cGcInputActions1> maInterceptInputBlackList;
    cTkDynamicArray<cTkClassPointer1> maInputs;

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
