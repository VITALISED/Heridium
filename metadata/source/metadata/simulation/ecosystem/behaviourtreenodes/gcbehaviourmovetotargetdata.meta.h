#pragma once

#include "../../../../../../../../pch.h"
class cTkBlackboardDefaultValueFloat;

enum eBehaviourMoveSpeed
{
    EBehaviourMoveSpeed_Normal = 0,
    EBehaviourMoveSpeed_Fast = 1,
    EBehaviourMoveSpeed_Dynamic = 2,
};

class cGcBehaviourMoveToTargetData
{
    static const unsigned __int64 muNameHash = 489952435176464686;
    static const unsigned __int64 muTemplateHash = 5220671282647969531;
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
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
