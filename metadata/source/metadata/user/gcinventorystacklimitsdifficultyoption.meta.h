#pragma once
#include "../../../../../../pch.h"

enum eInventoryStackLimitsDifficulty
{
    EInventoryStackLimitsDifficulty_High = 0,
    EInventoryStackLimitsDifficulty_Normal = 1,
    EInventoryStackLimitsDifficulty_Low = 2,
};

class cGcInventoryStackLimitsDifficultyOption
{
    static const unsigned __int64 muNameHash = 0xBC2BBF55EEB95C06;
    static const unsigned __int64 muTemplateHash = 0x5F13D862186143AB;
    static const int miNumMembers = 1;

    eInventoryStackLimitsDifficulty meInventoryStackLimitsDifficulty;

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
