#include "gcquickmenuactionsavedata.meta.h"

void cGcQuickMenuActionSaveData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23066896);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcQuickMenuActionSaveData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23069744);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcQuickMenuActionSaveData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23070896);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

