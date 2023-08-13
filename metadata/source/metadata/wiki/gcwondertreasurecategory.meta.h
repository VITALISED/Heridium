#pragma once

#include "../../../../../../pch.h"
enum eWonderTreasureCategory
{
    EWonderTreasureCategory_Loot = 0,
    EWonderTreasureCategory_Document = 1,
    EWonderTreasureCategory_BioSample = 2,
    EWonderTreasureCategory_Fossil = 3,
    EWonderTreasureCategory_Plant = 4,
    EWonderTreasureCategory_Tool = 5,
    EWonderTreasureCategory_Farm = 6,
    EWonderTreasureCategory_SeaLoot = 7,
    EWonderTreasureCategory_SeaHorror = 8,
    EWonderTreasureCategory_Salvage = 9,
    EWonderTreasureCategory_Bones = 10,
    EWonderTreasureCategory_SpaceHorror = 11,
    EWonderTreasureCategory_SpaceBones = 12,
};

class cGcWonderTreasureCategory
{
    static const unsigned __int64 muNameHash = 6061133416234270980;
    static const unsigned __int64 muTemplateHash = 8677847459372650350;
    static const int miNumMembers = 1;

    eWonderTreasureCategory meWonderTreasureCategory;

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
