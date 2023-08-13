#pragma once

#include "../../../../../../pch.h"
enum eNGuiForcedStyle
{
    ENGuiForcedStyle_None = 0,
    ENGuiForcedStyle_Default = 1,
    ENGuiForcedStyle_Highlight = 2,
    ENGuiForcedStyle_Active = 3,
};

class cTkNGuiForcedStyle
{
    static const unsigned __int64 muNameHash = 13333586798103748796;
    static const unsigned __int64 muTemplateHash = 11235183754291568598;
    static const int miNumMembers = 1;

    eNGuiForcedStyle meNGuiForcedStyle;

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
