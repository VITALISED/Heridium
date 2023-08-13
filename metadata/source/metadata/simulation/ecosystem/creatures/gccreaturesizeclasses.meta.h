#pragma once

#include "../../../../../../../../pch.h"
enum eCreatureSizeClass
{
    ECreatureSizeClass_Small = 0,
    ECreatureSizeClass_Medium = 1,
    ECreatureSizeClass_Large = 2,
    ECreatureSizeClass_Huge = 3,
};

class cGcCreatureSizeClasses
{
    static const unsigned __int64 muNameHash = 12759799077664855843;
    static const unsigned __int64 muTemplateHash = 13130248608752710237;
    static const int miNumMembers = 1;

    eCreatureSizeClass meCreatureSizeClass;

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