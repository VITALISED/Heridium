#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/user/gcdifficultysettingtype.meta.h"
#include "../../../../metadata/source/metadata/user/gcdifficultysettingeditability.meta.h"

class cGcDifficultySettingCommonData
{
public:
    static const unsigned __int64 muNameHash = 0xA98FDB01046545AD;
    static const unsigned __int64 muTemplateHash = 0xBDEDB2FA76A38658;
    static const int miNumMembers = 7;

    cGcDifficultySettingType mSettingType;
    bool mbIsAscendingDifficulty;
    cGcDifficultySettingEditability mEditabilityInOptionsMenu;
    TkID<256> mTitleLocID;
    TkID<256> mDescriptionLocID;
    TkID<256> mToggleEnabledLocID;
    TkID<256> mToggleDisabledLocID;

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
