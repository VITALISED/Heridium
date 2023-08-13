#pragma once
#include "../../../../../../pch.h"

enum eFrigateStatType
{
    EFrigateStatType_Combat = 0,
    EFrigateStatType_Exploration = 1,
    EFrigateStatType_Mining = 2,
    EFrigateStatType_Diplomatic = 3,
    EFrigateStatType_FuelBurnRate = 4,
    EFrigateStatType_FuelCapacity = 5,
    EFrigateStatType_Speed = 6,
    EFrigateStatType_ExtraLoot = 7,
    EFrigateStatType_Repair = 8,
    EFrigateStatType_Invulnerable = 9,
    EFrigateStatType_Stealth = 10,
};

class cGcFrigateStatType
{
    static const unsigned __int64 muNameHash = 0x5B21B72DF30D668C;
    static const unsigned __int64 muTemplateHash = 0xA354D70279797182;
    static const int miNumMembers = 1;

    eFrigateStatType meFrigateStatType;

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
