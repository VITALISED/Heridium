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
    static const unsigned __int64 muNameHash = 13559141478927260678;
    static const unsigned __int64 muTemplateHash = 6851057373988078507;
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
