#pragma once

#include "../../../../../../pch.h"
enum eCombatTimerDifficultyOption
{
    ECombatTimerDifficultyOption_Off = 0,
    ECombatTimerDifficultyOption_Slow = 1,
    ECombatTimerDifficultyOption_Normal = 2,
    ECombatTimerDifficultyOption_Fast = 3,
};

class cGcCombatTimerDifficultyOption
{
    static const unsigned __int64 muNameHash = 17584267993349040560;
    static const unsigned __int64 muTemplateHash = 4108983444971433258;
    static const int miNumMembers = 1;

    eCombatTimerDifficultyOption meCombatTimerDifficultyOption;

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
