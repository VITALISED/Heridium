#pragma once
#include "../../../../../../../pch.h"

enum eDensity
{
    EDensity_Sparse = 0,
    EDensity_Normal = 1,
    EDensity_Dense = 2,
    EDensity_VeryDense = 3,
};

class cGcCreatureGenerationDensity
{
    static const unsigned __int64 muNameHash = 0x2CD4E62B393F6930;
    static const unsigned __int64 muTemplateHash = 0x6C76550BC2D8BBE4;
    static const int miNumMembers = 1;

    eDensity meDensity;

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
