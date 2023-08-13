#pragma once
#include "pch.h"

enum eProductCategory
{
    EProductCategory_Component = 0,
    EProductCategory_Consumable = 1,
    EProductCategory_Tradeable = 2,
    EProductCategory_Curiosity = 3,
    EProductCategory_BuildingPart = 4,
    EProductCategory_Procedural = 5,
    EProductCategory_Emote = 6,
    EProductCategory_CustomisationPart = 7,
    EProductCategory_CreatureEgg = 8,
};

class cGcProductCategory
{
public:
    static const unsigned __int64 muNameHash = 0xB3E1998DF67B4EF2;
    static const unsigned __int64 muTemplateHash = 0xFD2D86AE268A7F24;
    static const int miNumMembers = 1;

    eProductCategory meProductCategory;

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
