#pragma once
#include "../../../../../../../../pch.h"

enum eFreighterBattleStatus
{
    EFreighterBattleStatus_None = 0,
    EFreighterBattleStatus_Active = 1,
    EFreighterBattleStatus_Joined = 2,
    EFreighterBattleStatus_Reward = 3,
};
class cTkEqualityEnum;

class cGcMissionConditionFreighterBattle
{
    static const unsigned __int64 muNameHash = 0xF8A296780D76172F;
    static const unsigned __int64 muTemplateHash = 0xCB7F989D6DA449DA;
    static const int miNumMembers = 3;

    eFreighterBattleStatus meFreighterBattleStatus;
    int miFreighterBattleDistance;
    cTkEqualityEnum mFreighterBattleTest;

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
