#pragma once
#include "../../../../../../pch.h"

#include "../../../../../../metadata/source/metadata/reality/stats/gcstatstypes.meta.h"

class cGcMissionSequenceGatherForRefuel
{
public:
    static const unsigned __int64 muNameHash = 0x9FA5A1E5E026A5B3;
    static const unsigned __int64 muTemplateHash = 0x12EF3E077583FC5B;
    static const int miNumMembers = 4;

    cTkFixedString<128,char> macMessage;
    cGcStatsTypes mTargetStat;
    int miAmount;
    cTkFixedString<128,char> macDebugText;

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
