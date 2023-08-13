#pragma once
#include "../../../../../../pch.h"

enum eSubstanceCategory
{
    ESubstanceCategory_Fuel = 0,
    ESubstanceCategory_Metal = 1,
    ESubstanceCategory_Catalyst = 2,
    ESubstanceCategory_Stellar = 3,
    ESubstanceCategory_Flora = 4,
    ESubstanceCategory_Earth = 5,
    ESubstanceCategory_Exotic = 6,
    ESubstanceCategory_Special = 7,
    ESubstanceCategory_BuildingPart = 8,
};

class cGcRealitySubstanceCategory
{
    static const unsigned __int64 muNameHash = 0x13D76408C6BF207D;
    static const unsigned __int64 muTemplateHash = 0x6B88061EEAA9975A;
    static const int miNumMembers = 1;

    eSubstanceCategory meSubstanceCategory;

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
