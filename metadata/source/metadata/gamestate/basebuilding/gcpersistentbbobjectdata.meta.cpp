#include "gcpersistentbbobjectdata.meta.h"

void cGcPersistentBBObjectData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34074704);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPersistentBBObjectData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34077232);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPersistentBBObjectData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34078224);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

