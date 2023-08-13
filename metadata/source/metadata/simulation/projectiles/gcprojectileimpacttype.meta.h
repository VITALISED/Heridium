#pragma once
#include "pch.h"

enum eImpact
{
    EImpact_Default = 0,
    EImpact_Terrain = 1,
    EImpact_Substance = 2,
    EImpact_Rock = 3,
    EImpact_Asteroid = 4,
    EImpact_Shield = 5,
    EImpact_Creature = 6,
    EImpact_Robot = 7,
    EImpact_Freighter = 8,
    EImpact_Cargo = 9,
    EImpact_Ship = 10,
    EImpact_Plant = 11,
    EImpact_NeedsTech = 12,
    EImpact_Player = 13,
    EImpact_OtherPlayer = 14,
    EImpact_SentinelShield = 15,
    EImpact_SpaceshipShield = 16,
};

class cGcProjectileImpactType
{
public:
    static const unsigned __int64 muNameHash = 0xC652A220FFABA4FE;
    static const unsigned __int64 muTemplateHash = 0x4B2046067B91DF22;
    static const int miNumMembers = 1;

    eImpact meImpact;

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
