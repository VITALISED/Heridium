#pragma once

#include "../../../../../../../pch.h"
enum eMovementDirection
{
    EMovementDirection_WorldRelative = 0,
    EMovementDirection_BodyRelative = 1,
    EMovementDirection_HeadRelative = 2,
    EMovementDirection_NotSet = 3,
};

class cGcMovementDirection
{
    static const unsigned __int64 muNameHash = 6459654600111516793;
    static const unsigned __int64 muTemplateHash = 4943173166301416135;
    static const int miNumMembers = 1;

    eMovementDirection meMovementDirection;

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
