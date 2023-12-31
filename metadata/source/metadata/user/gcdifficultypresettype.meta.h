#pragma once
#include "../../../../pch.h"

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
public:
    static const unsigned __int64 muNameHash = 0x5401230062A6D869;
    static const unsigned __int64 muTemplateHash = 0x3EFADB6935A48DD6;
    static const int miNumMembers = 1;

    eDifficultyPresetType meDifficultyPresetType;

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
