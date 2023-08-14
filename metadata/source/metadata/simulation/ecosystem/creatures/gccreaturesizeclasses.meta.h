#pragma once
#include "../../../../../../pch.h"

enum eCreatureSizeClass
{
    ECreatureSizeClass_Small = 0,
    ECreatureSizeClass_Medium = 1,
    ECreatureSizeClass_Large = 2,
    ECreatureSizeClass_Huge = 3,
};

class cGcCreatureSizeClasses
{
public:
    static const unsigned __int64 muNameHash = 0xB113E9A825921723;
    static const unsigned __int64 muTemplateHash = 0xB638038AE945B25D;
    static const int miNumMembers = 1;

    eCreatureSizeClass meCreatureSizeClass;

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
