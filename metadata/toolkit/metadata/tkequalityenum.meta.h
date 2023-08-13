#pragma once

#include "../../../../../pch.h"
enum eEqualityEnum
{
    EEqualityEnum_Equal = 0,
    EEqualityEnum_Greater = 1,
    EEqualityEnum_Less = 2,
    EEqualityEnum_GreaterEqual = 3,
    EEqualityEnum_LessEqual = 4,
};

class cTkEqualityEnum
{
    static const unsigned __int64 muNameHash = 1081498647477511074;
    static const unsigned __int64 muTemplateHash = 17554936686440284289;
    static const int miNumMembers = 1;

    eEqualityEnum meEqualityEnum;

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
