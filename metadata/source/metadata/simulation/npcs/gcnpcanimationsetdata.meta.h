#pragma once
#include "pch.h"

class cGcNPCAnimationSetData
{
public:
    static const unsigned __int64 muNameHash = 0xF3A35A6135FAD505;
    static const unsigned __int64 muTemplateHash = 0xE00D51FF9EA5A779;
    static const int miNumMembers = 7;

    cTkDynamicArray<cGcNPCProbabilityAnimationData1> maIdleAnimations;
    cTkDynamicArray<cGcNPCProbabilityAnimationData1> maIdleFlavourAnimations;
    cTkDynamicArray<cGcNPCProbabilityAnimationData1> maChatterAnimations;
    cTkDynamicArray<cGcNPCProbabilityAnimationData1> maListenAnimations;
    cTkDynamicArray<cGcNPCProbabilityAnimationData1> maGreetAnimations;
    cTkFixedArray<cGcNPCAnimationList, 9> maMoodAnims;
    cTkFixedArray<TkID<128>, 9> maMoodLoops;

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
