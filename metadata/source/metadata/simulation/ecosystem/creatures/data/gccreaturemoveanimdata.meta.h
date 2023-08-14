#pragma once
#include "../../../../../../../pch.h"

class cGcCreatureMoveAnimData
{
public:
    static const unsigned __int64 muNameHash = 0x50CC62720AB69C5;
    static const unsigned __int64 muTemplateHash = 0x2DC6AD707DCBEFED;
    static const int miNumMembers = 11;

    TkID<128> mAnim;
    TkID<128> mAnimLeft;
    TkID<128> mAnimRight;
    float mfAnimSpeed;
    float mfMinSpeedScale;
    float mfMaxSpeedScale;
    float mfMaxPredatorSpeedScale;
    float mfMinPetSpeedScale;
    float mfMaxPetSpeedScale;
    float mfAnimMoveSpeed;
    bool mbAnimMoveSpeedCached;

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
