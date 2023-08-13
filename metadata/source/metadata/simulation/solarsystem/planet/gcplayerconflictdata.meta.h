#pragma once

#include "../../../../../../../../pch.h"
enum eConflictLevel
{
    EConflictLevel_Low = 0,
    EConflictLevel_Default = 1,
    EConflictLevel_High = 2,
    EConflictLevel_Pirate = 3,
};

class cGcPlayerConflictData
{
    static const unsigned __int64 muNameHash = 17618033580830203904;
    static const unsigned __int64 muTemplateHash = 4768666853324273343;
    static const int miNumMembers = 1;

    eConflictLevel meConflictLevel;

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