#pragma once

#include "../../../../../../pch.h"
class cGcDifficultySettingType;
class cGcDifficultySettingEditability;

class cGcDifficultySettingCommonData
{
    static const unsigned __int64 muNameHash = 12218225111494641069;
    static const unsigned __int64 muTemplateHash = 13685791631450801752;
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
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
