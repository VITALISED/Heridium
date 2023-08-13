#pragma once
#include "pch.h"

class cTkAnimationData;

class cTkAnimationComponentData
{
public:
    static const unsigned __int64 muNameHash = 0x379CFCF1CE84CBAA;
    static const unsigned __int64 muTemplateHash = 0xB5263393C2F176F4;
    static const int miNumMembers = 5;

    cTkAnimationData mIdle;
    cTkDynamicArray<cTkAnimationData1> maAnims;
    cTkDynamicArray<cTkAnimBlendTree1> maTrees;
    bool mbNetSyncAnimations;
    cTkDynamicArray<cTkAnimJointLODData1> maJointLODOverrides;

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
