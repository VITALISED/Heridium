#pragma once
#include "pch.h"

enum eWonderType
{
    EWonderType_Treasure = 0,
    EWonderType_WeirdBasePart = 1,
    EWonderType_Planet = 2,
    EWonderType_Creature = 3,
    EWonderType_Flora = 4,
    EWonderType_Mineral = 5,
    EWonderType_Custom = 6,
};

class cGcWonderType
{
public:
    static const unsigned __int64 muNameHash = 0xBA9101F9B520DE21;
    static const unsigned __int64 muTemplateHash = 0x8FDB3630AB843ADE;
    static const int miNumMembers = 1;

    eWonderType meWonderType;

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
