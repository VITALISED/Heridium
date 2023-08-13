#pragma once

#include "../../../../../../pch.h"
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
    static const unsigned __int64 muNameHash = 12650793232508764363;
    static const unsigned __int64 muTemplateHash = 8022078970589096531;
    static const int miNumMembers = 1;

    eFiendCrime meFiendCrime;

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
