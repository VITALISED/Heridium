#pragma once

#include "../../../../../../../pch.h"
class cGcCreatureGenerationOptionalWeightedList;
class cGcCreatureGenerationOptionalWeightedList;
class cGcCreatureGenerationWeightedList;

class cGcCreatureGenerationData
{
    static const unsigned __int64 muNameHash = 5134917206351885255;
    static const unsigned __int64 muTemplateHash = 13373337506735427779;
    static const int miNumMembers = 17;

    cTkFixedArray<cGcCreatureGenerationOptionalWeightedList> maBiomeSpecific;
    cTkFixedArray<cGcCreatureGenerationOptionalWeightedList> maSubBiomeSpecific;
    cGcCreatureGenerationOptionalWeightedList mAbandonedSystemSpecific;
    cGcCreatureGenerationOptionalWeightedList mEmptySystemSpecific;
    cGcCreatureGenerationWeightedList mGeneric;
    cTkDynamicArray<cGcCreatureGenerationWeightedListDomainEntry> maAirArchetypesForEmptyGround;
    cTkFixedArray<float> maSandwormPresenceChance;
    cTkFixedArray<float> maLifeChance;
    cTkFixedArray<float> maRoleFrequencyModifiers;
    cTkFixedArray<float> maRarityFrequencyModifiers;
    cTkFixedArray<float> maGroundGroupsPerKm;
    cTkFixedArray<float> maWaterGroupsPerKm;
    cTkFixedArray<float> maAirGroupsPerKm;
    cTkFixedArray<float> maCaveGroupsPerKm;
    cTkFixedArray<float> maDensityModifiers;
    cTkFixedArray<float> maLifeLevelDensityModifiers;
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
