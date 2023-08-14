#pragma once
#include "../../../../../../pch.h"

class cGcBaseDefenceTrigger
{
public:
    static const unsigned __int64 muNameHash = 0x295BE0CF9BD70B66;
    static const unsigned __int64 muTemplateHash = 0xCBDA352215D0A296;
    static const int miNumMembers = 5;

    TkID<128> mPerceptionId;
    bool mbActiveWhenIdle;
    bool mbActiveWhenTargetAcquired;
    bool mbActiveWhenSearching;
    TkID<128> mLaserEffectId;

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
