#pragma once

#include "../../../../../../../../../pch.h"
class cGcCreatureMoveAnimData
{
    static const unsigned __int64 muNameHash = 363883541264296389;
    static const unsigned __int64 muTemplateHash = 3298514475753926637;
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
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
