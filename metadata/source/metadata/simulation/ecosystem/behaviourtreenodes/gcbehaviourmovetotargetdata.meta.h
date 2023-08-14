#pragma once
#include "../../../../../../pch.h"

#include "../../../../../../metadata/toolkit/metadata/simulation/tkblackboarddefaultvaluefloat.meta.h"

enum eBehaviourMoveSpeed
{
    EBehaviourMoveSpeed_Normal = 0,
    EBehaviourMoveSpeed_Fast = 1,
    EBehaviourMoveSpeed_Dynamic = 2,
};

class cGcBehaviourMoveToTargetData
{
public:
    static const unsigned __int64 muNameHash = 0x6CCA924D787E12E;
    static const unsigned __int64 muTemplateHash = 0x48738CDF0B50AEFB;
    static const int miNumMembers = 6;

    TkID<128> mTargetKey;
    cTkBlackboardDefaultValueFloat mArriveDist;
    eBehaviourMoveSpeed meBehaviourMoveSpeed;
    float mfDynamicMoveSlowdownDistMul;
    float mfSpeedModifier;
    float mfAvoidCreaturesStrength;

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
