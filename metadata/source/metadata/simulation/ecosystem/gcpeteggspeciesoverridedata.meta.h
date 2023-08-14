#pragma once
#include "../../../../../pch.h"

class cGcPetEggSpeciesOverrideData
{
public:
    static const unsigned __int64 muNameHash = 0x66A7186A5DDD202A;
    static const unsigned __int64 muTemplateHash = 0x6B85B3F076600E6D;
    static const int miNumMembers = 7;

    TkID<128> mCreatureID;
    bool mbCanChangeGrowth;
    bool mbCanChangeAccessories;
    bool mbCanChangeColour;
    bool mbCanChangeTraits;
    float mfMinScaleOverride;
    float mfMaxScaleOverride;

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
