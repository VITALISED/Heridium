#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/user/gcdifficultypresettype.meta.h"

class cGcDifficultySettingsReplicatedState
{
public:
    static const unsigned __int64 muNameHash = 0xAE3AC9A3967B8330;
    static const unsigned __int64 muTemplateHash = 0x782FBE9D9BD9D467;
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
    static void ClassPointerFix(cTkClassPointer* lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
