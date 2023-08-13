#pragma once

#include "../../../../../pch.h"
class cTkLanguages;

class cTkLanguageFontTableEntry
{
    static const unsigned __int64 muNameHash = 6710697445977777572;
    static const unsigned __int64 muTemplateHash = 2069806801137827191;
    static const int miNumMembers = 5;

    cTkLanguages mLanguage;
    cTkFixedString<128,char> macGameFont;
    cTkFixedString<128,char> macGameFont2;
    cTkFixedString<128,char> macConsoleFont;
    cTkFixedString<128,char> macConsoleFont2;

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
