#pragma once

#include "../../../../../../pch.h"
enum eCombatEffectType
{
    ECombatEffectType_None = 0,
    ECombatEffectType_Fire = 1,
    ECombatEffectType_Stun = 2,
    ECombatEffectType_Slow = 3,
};

class cGcCombatEffectType
{
    static const unsigned __int64 muNameHash = 919701794041376248;
    static const unsigned __int64 muTemplateHash = 1095842793634099301;
    static const int miNumMembers = 1;

    eCombatEffectType meCombatEffectType;

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
