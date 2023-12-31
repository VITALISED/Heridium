#pragma once
#include "../../../../../../pch.h"

#include "../../../../../../metadata/toolkit/metadata/simulation/tkblackboarddefaultvalueid.meta.h"

class cGcBehaviourLaunchProjectileData
{
public:
    static const unsigned __int64 muNameHash = 0x4442EB7E64C68AC9;
    static const unsigned __int64 muTemplateHash = 0x1F1BB35707F734B;
    static const int miNumMembers = 5;

    cTkBlackboardDefaultValueId mProjectile;
    cTkFixedString<64,char> macLaunchJoint;
    int miAmount;
    float mfHorizontalDispersion;
    float mfVerticalDispersion;

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
