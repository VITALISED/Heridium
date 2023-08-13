#pragma once
#include "../../../../../../pch.h"

class cGcNameGeneratorWord;
class cGcNameGeneratorWord;
class cGcNameGeneratorWord;

class cGcProceduralProductWord
{
    static const unsigned __int64 muNameHash = 0xB732A8EFDEA74BA;
    static const unsigned __int64 muTemplateHash = 0xD6EF0AF761A6413;
    static const int miNumMembers = 4;

    cGcNameGeneratorWord mWord;
    cGcNameGeneratorWord mUncommonWord;
    cGcNameGeneratorWord mRareWord;
    cTkFixedString<32,char> macReplaceKey;

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
