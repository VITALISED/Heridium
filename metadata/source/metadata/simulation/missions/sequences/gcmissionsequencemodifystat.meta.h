#pragma once
#include "../../../../../../pch.h"

#include "../../../../../../metadata/source/metadata/gamestate/stats/gcstatmodifytype.meta.h"

class cGcMissionSequenceModifyStat
{
public:
    static const unsigned __int64 muNameHash = 0xC9F9F1B2965E5228;
    static const unsigned __int64 muTemplateHash = 0x3A674B1D349980A0;
    static const int miNumMembers = 3;

    TkID<128> mStat;
    int miAmount;
    cGcStatModifyType mModifyType;

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
