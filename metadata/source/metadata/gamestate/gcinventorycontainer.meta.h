#pragma once

#include "../../../../../../pch.h"
class cGcInventoryClass;
class cGcInventoryStackSizeGroup;

class cGcInventoryContainer
{
    static const unsigned __int64 muNameHash = 12648175466744569361;
    static const unsigned __int64 muTemplateHash = 7711365262255670573;
    static const int miNumMembers = 11;

    cTkDynamicArray<cGcInventoryElement> maSlots;
    cTkDynamicArray<cGcInventoryIndex> maValidSlotIndices;
    cGcInventoryClass mClass;
    cGcInventoryStackSizeGroup mStackSizeGroup;
    cTkDynamicArray<cGcInventoryBaseStatEntry> maBaseStatValues;
    cTkDynamicArray<cGcInventorySpecialSlot> maSpecialSlots;
    int miWidth;
    int miHeight;
    bool mbIsCool;
    cTkFixedString<256,char> macName;
    int miVersion;

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
