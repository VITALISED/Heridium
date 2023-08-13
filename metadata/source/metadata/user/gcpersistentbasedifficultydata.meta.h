#pragma once
#include "pch.h"

class cGcDifficultyPresetType;

enum exPersistentBaseDifficultyFlags
{
    EPersistentBaseDifficultyFlags_Locked = 1,
};

class cGcPersistentBaseDifficultyData
{
public:
    static const unsigned __int64 muNameHash = 0x6E51E89E7E62BE51;
    static const unsigned __int64 muTemplateHash = 0x287BA08F43914FB5;
    static const int miNumMembers = 2;

    cGcDifficultyPresetType mDifficultyPreset;
    exPersistentBaseDifficultyFlags mexPersistentBaseDifficultyFlags;

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
