#pragma once

#include "../../../../../../../../../../pch.h"
enum ePrimaryAxis
{
    EPrimaryAxis_Z = 0,
    EPrimaryAxis_ZNeg = 1,
    EPrimaryAxis_X = 2,
    EPrimaryAxis_XNeg = 3,
    EPrimaryAxis_Y = 4,
    EPrimaryAxis_YNeg = 5,
};

class cGcPrimaryAxis
{
    static const unsigned __int64 muNameHash = 9481616353790171594;
    static const unsigned __int64 muTemplateHash = 8304810799908190835;
    static const int miNumMembers = 1;

    ePrimaryAxis mePrimaryAxis;

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
