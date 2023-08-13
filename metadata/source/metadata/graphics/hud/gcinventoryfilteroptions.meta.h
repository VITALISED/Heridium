#pragma once

#include "../../../../../../../pch.h"
enum eInventoryFilter
{
    EInventoryFilter_All = 0,
    EInventoryFilter_Substance = 1,
    EInventoryFilter_HighValue = 2,
    EInventoryFilter_Consumable = 3,
    EInventoryFilter_Deployable = 4,
};

class cGcInventoryFilterOptions
{
    static const unsigned __int64 muNameHash = 1516443454411152199;
    static const unsigned __int64 muTemplateHash = 5308922925852844281;
    static const int miNumMembers = 1;

    eInventoryFilter meInventoryFilter;

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
