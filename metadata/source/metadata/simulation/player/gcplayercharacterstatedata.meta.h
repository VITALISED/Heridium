#pragma once
#include "../../../../../pch.h"

class cGcPlayerCharacterStateData
{
public:
    static const unsigned __int64 muNameHash = 0xCCEE5C02303ACEC6;
    static const unsigned __int64 muTemplateHash = 0xFC07380B8762421C;
    static const int miNumMembers = 11;

    TkID<128> mLocomotion0H;
    TkID<128> mLocomotion1H;
    TkID<128> mLocomotion2H;
    TkID<128> mAimTree1HPitch;
    TkID<128> mAimTree1HYaw;
    TkID<128> mAimTree2HPitch;
    TkID<128> mAimTree2HYaw;
    TkID<128> mHitReact0H;
    TkID<128> mHitReact1H;
    TkID<128> mHitReact2H;
    bool mbKeepHeadForward;

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
