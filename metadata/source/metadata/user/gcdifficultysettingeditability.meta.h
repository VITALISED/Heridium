#pragma once
#include "pch.h"

enum eDifficultySettingEditability
{
    EDifficultySettingEditability_FullyEditable = 0,
    EDifficultySettingEditability_IncreaseOnly = 1,
    EDifficultySettingEditability_DecreaseOnly = 2,
    EDifficultySettingEditability_LockedVisible = 3,
    EDifficultySettingEditability_LockedHidden = 4,
};

class cGcDifficultySettingEditability
{
public:
    static const unsigned __int64 muNameHash = 0x215639935EEC2DFE;
    static const unsigned __int64 muTemplateHash = 0xCEE62246904BB76D;
    static const int miNumMembers = 1;

    eDifficultySettingEditability meDifficultySettingEditability;

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
