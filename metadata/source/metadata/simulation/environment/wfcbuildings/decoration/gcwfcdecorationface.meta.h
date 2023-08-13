#pragma once
#include "pch.h"

enum eCanWalk
{
    ECanWalk_None = 0,
    ECanWalk_RequireCanWalk = 1,
    ECanWalk_RequireCanNotWalk = 2,
};

class cGcWFCDecorationFace
{
public:
    static const unsigned __int64 muNameHash = 0x7BCF7FA8AF0C694F;
    static const unsigned __int64 muTemplateHash = 0x931FF264F649885B;
    static const int miNumMembers = 2;

    cTkFixedString<128,char> macRequiredFace;
    eCanWalk meCanWalk;

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
