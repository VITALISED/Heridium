#pragma once
#include "../../../../../../pch.h"

enum eFreighterInCurrentSystem
{
    EFreighterInCurrentSystem_DontCare = 0,
    EFreighterInCurrentSystem_Yes = 1,
    EFreighterInCurrentSystem_No = 2,
};

class cGcMissionConditionHasFreighter
{
public:
    static const unsigned __int64 muNameHash = 0x8563E3CD9630D9C;
    static const unsigned __int64 muTemplateHash = 0xD3FFE0FC90CC639;
    static const int miNumMembers = 1;

    eFreighterInCurrentSystem meFreighterInCurrentSystem;

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
