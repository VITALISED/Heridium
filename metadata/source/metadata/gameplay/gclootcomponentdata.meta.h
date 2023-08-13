#pragma once
#include "../../../../../../pch.h"

class cGcLootComponentData
{
    static const unsigned __int64 muNameHash = 0x1E85F3A419864E16;
    static const unsigned __int64 muTemplateHash = 0x7173DCD61496ED;
    static const int miNumMembers = 8;

    cTkVector2 mTimed;
    TkID<128> mTimeOutEffect;
    bool mbDeathPoint;
    float mfFlashPercent;
    int miNumFlashes;
    bool mbPhysicsControlled;
    bool mbKeepUpright;
    TkID<128> mReward;

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
