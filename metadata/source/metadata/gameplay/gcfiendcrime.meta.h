#pragma once
#include "../../../../pch.h"

enum eFiendCrime
{
    EFiendCrime_None = 0,
    EFiendCrime_EggDamaged = 1,
    EFiendCrime_EggDestroyed = 2,
    EFiendCrime_EggCollected = 3,
    EFiendCrime_UnderwaterPropDamaged = 4,
    EFiendCrime_UnderwaterPropCollected = 5,
    EFiendCrime_RockTransform = 6,
    EFiendCrime_GroundPropDamage = 7,
    EFiendCrime_ShotWorm = 8,
};

class cGcFiendCrime
{
public:
    static const unsigned __int64 muNameHash = 0xAF90A56B0E99C0CB;
    static const unsigned __int64 muTemplateHash = 0x6F5426522A182A53;
    static const int miNumMembers = 1;

    eFiendCrime meFiendCrime;

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
