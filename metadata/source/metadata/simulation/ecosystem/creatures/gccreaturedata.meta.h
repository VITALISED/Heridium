#pragma once

#include "../../../../../../../../pch.h"
class cGcCreatureTypes;
class cGcCreatureTypes;

enum eMoveArea
{
    EMoveArea_Ground = 0,
    EMoveArea_Water = 1,
    EMoveArea_Air = 2,
    EMoveArea_Space = 3,
};
class cGcCreatureRarity;
class cGcCreatureRoleFrequencyModifier;
class cGcCreatureRoleFrequencyModifier;

class cGcCreatureData
{
    static const unsigned __int64 muNameHash = 1382243966603474855;
    static const unsigned __int64 muTemplateHash = 16741108971811975054;
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
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
