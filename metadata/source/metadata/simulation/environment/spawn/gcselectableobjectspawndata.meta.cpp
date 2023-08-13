#include "gcselectableobjectspawndata.meta.h"

void cGcSelectableObjectSpawnData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27043312);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSelectableObjectSpawnData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27047600);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSelectableObjectSpawnData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27048608);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

