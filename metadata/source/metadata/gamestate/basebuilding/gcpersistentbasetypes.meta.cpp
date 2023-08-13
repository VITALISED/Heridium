#include "gcpersistentbasetypes.meta.h"

void cGcPersistentBaseTypes::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34075520);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPersistentBaseTypes::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34077392);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPersistentBaseTypes::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34078320);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

