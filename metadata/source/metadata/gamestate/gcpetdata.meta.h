#pragma once

#include "../../../../../../pch.h"
class cGcBiomeType;
class cGcCreatureTypes;
class cGcDiscoveryOwner;

class cGcPetData
{
    static const unsigned __int64 muNameHash = 11050943730411855000;
    static const unsigned __int64 muTemplateHash = 10716582751254316352;
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
    cTkFixedArray<float> maTraits;
    cTkFixedArray<float> maMoods;

    static bool ClassPointerCompare(const cTkClassPointer* lPtr, const cTkClassPointer *lOtherPtr);
    static void ClassPointerCopy(cTkClassPointer* lDest, const cTkClassPointer *lSource);
    static cTkClassPointer* ClassPointerCreate(cTkClassPointer* result);
    static void ClassPointerCreateDefault(cTkClassPointer* lPtr, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerDestroy(cTkClassPointer* lPtr);
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
