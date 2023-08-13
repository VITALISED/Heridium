#include "gcdefaultmissionitemstable.meta.h"

void cGcDefaultMissionItemsTable::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(25648528);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcDefaultMissionItemsTable::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(25653776);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcDefaultMissionItemsTable::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(25655024);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

