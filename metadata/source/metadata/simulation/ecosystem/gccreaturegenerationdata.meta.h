#pragma once
#include "pch.h"

class cGcCreatureGenerationOptionalWeightedList;
class cGcCreatureGenerationOptionalWeightedList;
class cGcCreatureGenerationWeightedList;

class cGcCreatureGenerationData
{
public:
    static const unsigned __int64 muNameHash = 0x4742E3FE43A533C7;
    static const unsigned __int64 muTemplateHash = 0xB997A39B7E5F90C3;
    static const int miNumMembers = 17;

    cTkFixedArray<cGcCreatureGenerationOptionalWeightedList, 16> maBiomeSpecific;
    cTkFixedArray<cGcCreatureGenerationOptionalWeightedList, 27> maSubBiomeSpecific;
    cGcCreatureGenerationOptionalWeightedList mAbandonedSystemSpecific;
    cGcCreatureGenerationOptionalWeightedList mEmptySystemSpecific;
    cGcCreatureGenerationWeightedList mGeneric;
    cTkDynamicArray<cGcCreatureGenerationWeightedListDomainEntry1> maAirArchetypesForEmptyGround;
    cTkFixedArray<float, 16> maSandwormPresenceChance;
    cTkFixedArray<float, 4> maLifeChance;
    cTkFixedArray<float, 4> maRoleFrequencyModifiers;
    cTkFixedArray<float, 4> maRarityFrequencyModifiers;
    cTkFixedArray<float, 4> maGroundGroupsPerKm;
    cTkFixedArray<float, 4> maWaterGroupsPerKm;
    cTkFixedArray<float, 4> maAirGroupsPerKm;
    cTkFixedArray<float, 4> maCaveGroupsPerKm;
    cTkFixedArray<float, 4> maDensityModifiers;
    cTkFixedArray<float, 4> maLifeLevelDensityModifiers;
    float mfHerdCreaturePenalty;

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
