#include "gcdialogclearancetable.meta.h"

void cGcDialogClearanceTable::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30583008);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcDialogClearanceTable::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30589760);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcDialogClearanceTable::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30591536);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

