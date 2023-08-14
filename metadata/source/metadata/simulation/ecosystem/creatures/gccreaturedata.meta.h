#pragma once
#include "../../../../../../pch.h"

#include "../../../../../../metadata/source/metadata/simulation/ecosystem/creatures/gccreaturetypes.meta.h"
#include "../../../../../../metadata/source/metadata/simulation/ecosystem/creatures/gccreaturetagandrarity.meta.h"

enum eMoveArea
{
    EMoveArea_Ground = 0,
    EMoveArea_Water = 1,
    EMoveArea_Air = 2,
    EMoveArea_Space = 3,
};
#include "../../../../../../metadata/source/metadata/reality/gccreaturerarity.meta.h"
#include "../../../../../../metadata/source/metadata/simulation/ecosystem/creatures/gccreaturerolefrequencymodifier.meta.h"

class cGcCreatureData
{
public:
    static const unsigned __int64 muNameHash = 0x132EB7906E53B7A7;
    static const unsigned __int64 muTemplateHash = 0xE8545DE962F52F8E;
    static const int miNumMembers = 17;

    TkID<128> mId;
    bool mbOnlySpawnWhenIdIsForced;
    cGcCreatureTypes mForceType;
    cGcCreatureTypes mRealType;
    bool mbEcoSystemCreature;
    bool mbCanBeFemale;
    cTkDynamicArray<cGcCreatureTagAndRarity> maTags;
    eMoveArea meMoveArea;
    float mfMinScale;
    float mfMaxScale;
    float mfFurLengthModifierAtMinScale;
    float mfFurLengthModifierAtMaxScale;
    float mfFurChance;
    cGcCreatureRarity mRarity;
    cGcCreatureRoleFrequencyModifier mPredatorProbabilityModifier;
    cGcCreatureRoleFrequencyModifier mHerbivoreProbabilityModifier;
    cTkDynamicArray<cTkClassPointer> maData;

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
