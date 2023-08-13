#pragma once

#include "../../../../../../pch.h"
enum eInventorySpecialSlotType
{
    EInventorySpecialSlotType_Broken = 0,
    EInventorySpecialSlotType_TechOnly = 1,
    EInventorySpecialSlotType_Cargo = 2,
    EInventorySpecialSlotType_BlockedByBrokenTech = 3,
    EInventorySpecialSlotType_TechBonus = 4,
};

class cGcInventorySpecialSlotType
{
    static const unsigned __int64 muNameHash = 12213775728764953934;
    static const unsigned __int64 muTemplateHash = 12847024259253054989;
    static const int miNumMembers = 1;

    eInventorySpecialSlotType meInventorySpecialSlotType;

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
