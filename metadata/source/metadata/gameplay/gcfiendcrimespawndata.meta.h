#pragma once
#include "../../../../../../pch.h"

class cGcCreatureTypes;

class cGcFiendCrimeSpawnData
{
    static const unsigned __int64 muNameHash = 0x9F76738BACABEAD2;
    static const unsigned __int64 muTemplateHash = 0xDEB0FEF9EC99F1EC;
    static const int miNumMembers = 5;

    cGcCreatureTypes mType;
    float mfMinDist;
    float mfMaxDist;
    cTkFixedArray<int> maMinNum;
    cTkFixedArray<int> maMaxNum;

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
