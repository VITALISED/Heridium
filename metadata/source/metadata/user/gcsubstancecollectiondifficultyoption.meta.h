#pragma once
#include "pch.h"

enum eSubstanceCollectionDifficulty
{
    ESubstanceCollectionDifficulty_High = 0,
    ESubstanceCollectionDifficulty_Normal = 1,
    ESubstanceCollectionDifficulty_Low = 2,
};

class cGcSubstanceCollectionDifficultyOption
{
public:
    static const unsigned __int64 muNameHash = 0x685F577065EC8459;
    static const unsigned __int64 muTemplateHash = 0x7356FAF37859706E;
    static const int miNumMembers = 1;

    eSubstanceCollectionDifficulty meSubstanceCollectionDifficulty;

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
