#pragma once

#include "../../../../../../../../pch.h"
enum eDialogueTree
{
    EDialogueTree_Bribe = 0,
    EDialogueTree_Beg = 1,
    EDialogueTree_Ambush = 2,
    EDialogueTree_Trade = 3,
    EDialogueTree_Help = 4,
    EDialogueTree_Goods = 5,
    EDialogueTree_Hostile = 6,
};

class cGcShipDialogueTreeEnum
{
    static const unsigned __int64 muNameHash = 13586057301885081745;
    static const unsigned __int64 muTemplateHash = 14688853516064891156;
    static const int miNumMembers = 1;

    eDialogueTree meDialogueTree;

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