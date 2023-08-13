#pragma once

#include "../../../../../../pch.h"
enum eTechnologyRarity
{
    ETechnologyRarity_Normal = 0,
    ETechnologyRarity_VeryCommon = 1,
    ETechnologyRarity_Common = 2,
    ETechnologyRarity_Rare = 3,
    ETechnologyRarity_VeryRare = 4,
    ETechnologyRarity_Impossible = 5,
    ETechnologyRarity_Always = 6,
};

class cGcTechnologyRarity
{
    static const unsigned __int64 muNameHash = 15797821283540869315;
    static const unsigned __int64 muTemplateHash = 4159540075271160580;
    static const int miNumMembers = 1;

    eTechnologyRarity meTechnologyRarity;

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
