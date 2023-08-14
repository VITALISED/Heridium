#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/simulation/solarsystem/planet/gcbiometype.meta.h"
#include "../../../../metadata/source/metadata/simulation/ecosystem/creatures/gccreaturetypes.meta.h"
#include "../../../../metadata/source/metadata/reality/gcdiscoveryowner.meta.h"

class cGcPetData
{
public:
    static const unsigned __int64 muNameHash = 0x995CD6C5BC075C98;
    static const unsigned __int64 muTemplateHash = 0x94B8F33BBE978540;
    static const int miNumMembers = 27;

    float mfScale;
    TkID<128> mCreatureID;
    cTkDynamicArray<TkID<256> > maDescriptors;
    cTkSeed mCreatureSeed;
    cTkSeed mCreatureSecondarySeed;
    unsigned __int64 mui64SpeciesSeed;
    unsigned __int64 mui64GenusSeed;
    TkID<256> mCustomSpeciesName;
    bool mbPredator;
    unsigned __int64 mui64UA;
    bool mbAllowUnmodifiedReroll;
    cTkSeed mColourBaseSeed;
    cTkSeed mBoneScaleSeed;
    bool mbHasFur;
    cGcBiomeType mBiome;
    cGcCreatureTypes mCreatureType;
    unsigned __int64 mui64BirthTime;
    unsigned __int64 mui64LastEggTime;
    unsigned __int64 mui64LastTrustIncreaseTime;
    unsigned __int64 mui64LastTrustDecreaseTime;
    bool mbEggModified;
    bool mbHasBeenSummoned;
    cTkFixedString<32,char> macCustomName;
    float mfTrust;
    cGcDiscoveryOwner mSenderData;
    cTkFixedArray<float, 3> maTraits;
    cTkFixedArray<float, 2> maMoods;

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
