#pragma once

#include "../../../../../../pch.h"
class cGcDifficultyPresetType;
class cGcDifficultyPresetType;
class cGcDifficultyPresetType;
class cGcDifficultyPresetType;

class cGcDifficultySettingsReplicatedState
{
    static const unsigned __int64 muNameHash = 12554568615690208048;
    static const unsigned __int64 muTemplateHash = 8660350192590640231;
    static const int miNumMembers = 6;

    bool mbIsPermadeath;
    cGcDifficultyPresetType mPreset;
    cGcDifficultyPresetType mRoundedDownPreset;
    cGcDifficultyPresetType mEasiestUsedPreset;
    cGcDifficultyPresetType mHardestUsedPreset;
    bool mbIsLocked;

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