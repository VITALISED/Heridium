#pragma once

#include "../../../../../../../../pch.h"
enum ePortalType
{
    EPortalType_Any = 0,
    EPortalType_Story = 1,
    EPortalType_NotStory = 2,
};

class cGcMissionConditionUsingPortal
{
    static const unsigned __int64 muNameHash = 665824669216581233;
    static const unsigned __int64 muTemplateHash = 14229383532788769073;
    static const int miNumMembers = 1;

    ePortalType mePortalType;

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