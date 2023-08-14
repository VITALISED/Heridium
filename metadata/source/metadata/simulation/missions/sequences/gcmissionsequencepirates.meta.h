#pragma once
#include "../../../../../../pch.h"

class cGcMissionSequencePirates
{
public:
    static const unsigned __int64 muNameHash = 0x9166CF1D0ED63522;
    static const unsigned __int64 muTemplateHash = 0xCC277D2F01D5CC7A;
    static const int miNumMembers = 8;

    bool mbScanCargo;
    int miNumSquads;
    TkID<128> mAttackDefinition;
    TkID<256> mRewardMessageOverride;
    bool mbSilent;
    float mfDistanceOverride;
    bool mbForceSpawn;
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
