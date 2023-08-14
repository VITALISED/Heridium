#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/source/metadata/simulation/player/gcplayercharacterikoverridedata.meta.h"

class cGcPlayerCharacterAnimationOverrideData
{
public:
    static const unsigned __int64 muNameHash = 0x78D4180CEDFDC316;
    static const unsigned __int64 muTemplateHash = 0xE1E8F5FEA4CE3E2D;
    static const int miNumMembers = 2;

    TkID<128> mAnimName;
    cGcPlayerCharacterIKOverrideData mData;

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
