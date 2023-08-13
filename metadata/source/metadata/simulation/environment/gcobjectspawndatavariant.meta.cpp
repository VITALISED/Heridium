#include "gcobjectspawndatavariant.meta.h"

void cGcObjectSpawnDataVariant::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27234016);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcObjectSpawnDataVariant::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27236048);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcObjectSpawnDataVariant::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27236752);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

