#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/toolkit/metadata/animation/tkanimationgamedata.meta.h"

class cTkAnimBlendTree
{
public:
    static const unsigned __int64 muNameHash = 0x1C442B06A4F945F4;
    static const unsigned __int64 muTemplateHash = 0xC6C8FE7E3EC66B68;
    static const int miNumMembers = 4;

    TkID<128> mId;
    cTkClassPointer mTree;
    int miPriority;
    cTkAnimationGameData mGameData;

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
