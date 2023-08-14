#pragma once
#include "../../../../../../pch.h"

enum eNPCTrigger
{
    ENPCTrigger_None = 0,
    ENPCTrigger_Idle = 1,
    ENPCTrigger_Greet = 2,
    ENPCTrigger_Mood = 3,
    ENPCTrigger_StartDead = 4,
    ENPCTrigger_Talk_Start = 5,
    ENPCTrigger_Talk_Stop = 6,
    ENPCTrigger_Interact_Start = 7,
    ENPCTrigger_Interact_Stop = 8,
    ENPCTrigger_Interact_BeginHold = 9,
    ENPCTrigger_Interact_CancelHold = 10,
    ENPCTrigger_LookAt_Player_Start = 11,
    ENPCTrigger_LookAt_Player_Stop = 12,
    ENPCTrigger_SetProp = 13,
    ENPCTrigger_Interact_StartFromRemote = 14,
};

class cGcNPCTriggerTypes
{
public:
    static const unsigned __int64 muNameHash = 0xED4A21D9F7E3058B;
    static const unsigned __int64 muTemplateHash = 0x34827E14E7CDCAFA;
    static const int miNumMembers = 1;

    eNPCTrigger meNPCTrigger;

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
