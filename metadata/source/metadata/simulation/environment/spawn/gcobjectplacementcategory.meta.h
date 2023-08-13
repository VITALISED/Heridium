#pragma once

#include "../../../../../../../../pch.h"
enum eObjectPlacement
{
    EObjectPlacement_None = 0,
    EObjectPlacement_ResourceSmall = 1,
    EObjectPlacement_ResourceMedium = 2,
    EObjectPlacement_ResourceLarge = 3,
    EObjectPlacement_ResourceDebris = 4,
};

class cGcObjectPlacementCategory
{
    static const unsigned __int64 muNameHash = 8788508835909491821;
    static const unsigned __int64 muTemplateHash = 12506058361529475792;
    static const int miNumMembers = 1;

    eObjectPlacement meObjectPlacement;

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