#include "gcpersistentbase.meta.h"

void cGcPersistentBase::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34210752);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPersistentBase::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34212928);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPersistentBase::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34214064);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

