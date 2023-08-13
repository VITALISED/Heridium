#pragma once
#include "../../../../../../../../pch.h"

class cGcDefaultMissionItemsTable
{
    static const unsigned __int64 muNameHash = 0x87FB8E825C599E66;
    static const unsigned __int64 muTemplateHash = 0x733D84A81936E3FF;
    static const int miNumMembers = 4;

    cTkDynamicArray<cGcDefaultMissionSubstance> maPrimarySubstances;
    cTkDynamicArray<cGcDefaultMissionSubstance> maSecondarySubstances;
    cTkDynamicArray<cGcDefaultMissionProduct> maPrimaryProducts;
    cTkDynamicArray<cGcDefaultMissionProduct> maSecondaryProducts;

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
