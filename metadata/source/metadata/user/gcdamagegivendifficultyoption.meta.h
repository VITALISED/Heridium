#pragma once

#include "../../../../../../pch.h"
enum eDamageGivenDifficulty
{
    EDamageGivenDifficulty_High = 0,
    EDamageGivenDifficulty_Normal = 1,
    EDamageGivenDifficulty_Low = 2,
};

class cGcDamageGivenDifficultyOption
{
    static const unsigned __int64 muNameHash = 927524165584944339;
    static const unsigned __int64 muTemplateHash = 6381902513850885770;
    static const int miNumMembers = 1;

    eDamageGivenDifficulty meDamageGivenDifficulty;

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
