#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/simulation/missions/defaultmissionitems/gcdefaultmissionsubstanceenum.meta.h"

class cGcRewardSpecificSubstance
{
public:
    static const unsigned __int64 muNameHash = 0xF3F4ABE3661F3779;
    static const unsigned __int64 muTemplateHash = 0xE57B2F997E3F6E10;
    static const int miNumMembers = 8;

    cGcDefaultMissionSubstanceEnum mDefault;
    TkID<128> mID;
    int miAmountMin;
    int miAmountMax;
    bool mbDisableMultiplier;
    bool mbRewardAsBlobs;
    bool mbUseFuelMultiplier;
    bool mbSilent;

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
