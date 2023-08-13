#pragma once

#include "../../../../../../pch.h"
enum eDifficultyPresetType
{
    EDifficultyPresetType_Invalid = 0,
    EDifficultyPresetType_Custom = 1,
    EDifficultyPresetType_Normal = 2,
    EDifficultyPresetType_Creative = 3,
    EDifficultyPresetType_Relaxed = 4,
    EDifficultyPresetType_Survival = 5,
    EDifficultyPresetType_Permadeath = 6,
};

class cGcDifficultyPresetType
{
    static const unsigned __int64 muNameHash = 6053157858724730985;
    static const unsigned __int64 muTemplateHash = 4538180819447221718;
    static const int miNumMembers = 1;

    eDifficultyPresetType meDifficultyPresetType;

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
