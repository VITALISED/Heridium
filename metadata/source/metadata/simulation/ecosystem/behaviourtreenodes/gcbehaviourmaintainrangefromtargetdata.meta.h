#pragma once
#include "../../../../../../../../pch.h"

class cTkBlackboardDefaultValueFloat;
class cTkBlackboardDefaultValueFloat;

class cGcBehaviourMaintainRangeFromTargetData
{
    static const unsigned __int64 muNameHash = 0x7C8B3A3A3EEFC49F;
    static const unsigned __int64 muTemplateHash = 0x8959480696CF2F28;
    static const int miNumMembers = 7;

    TkID<128> mTargetKey;
    cTkBlackboardDefaultValueFloat mMinDist;
    cTkBlackboardDefaultValueFloat mMaxDist;
    bool mb2D;
    bool mbSucceedWhenInRange;
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
