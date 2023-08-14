#pragma once
#include "../../../../pch.h"

enum eBlackboardType
{
    EBlackboardType_Invalid = 0,
    EBlackboardType_Float = 1,
    EBlackboardType_Integer = 2,
    EBlackboardType_Bool = 3,
    EBlackboardType_Id = 4,
    EBlackboardType_Vector = 5,
    EBlackboardType_Attachment = 6,
};

class cTkBlackboardType
{
public:
    static const unsigned __int64 muNameHash = 0x490DAD35C9B137EF;
    static const unsigned __int64 muTemplateHash = 0x82614740EF36942A;
    static const int miNumMembers = 1;

    eBlackboardType meBlackboardType;

    static bool ClassPointerCompare(const cTkClassPointer* lPtr, const cTkClassPointer *lOtherPtr);
    static void ClassPointerCopy(cTkClassPointer* lDest, const cTkClassPointer *lSource);
    static cTkClassPointer* ClassPointerCreate(cTkClassPointer* result);
    static void ClassPointerCreateDefault(cTkClassPointer* lPtr, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerDestroy(cTkClassPointer* lPtr);
    static void ClassPointerFix(cTkClassPointer* lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
