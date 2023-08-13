#pragma once
#include "pch.h"

enum eWFCDecorationTheme
{
    EWFCDecorationTheme_Default = 0,
    EWFCDecorationTheme_Construction = 1,
};

class cGcWFCDecorationTheme
{
public:
    static const unsigned __int64 muNameHash = 0x9634E2763C4B5D4D;
    static const unsigned __int64 muTemplateHash = 0x45C7C9E0AD9B71DD;
    static const int miNumMembers = 1;

    eWFCDecorationTheme meWFCDecorationTheme;

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
