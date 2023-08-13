#pragma once
#include "pch.h"

enum eCondition
{
    ECondition_Equal = 0,
    ECondition_NotEqual = 1,
    ECondition_Greater = 2,
    ECondition_Less = 3,
    ECondition_GreaterEqual = 4,
    ECondition_LessEqual = 5,
};

class cTkSketchConditions
{
public:
    static const unsigned __int64 muNameHash = 0x42F1604851DA7F02;
    static const unsigned __int64 muTemplateHash = 0x1B9710CC397E213C;
    static const int miNumMembers = 1;

    eCondition meCondition;

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
