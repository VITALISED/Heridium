#include "gcmechmeshtype.meta.h"

void cGcMechMeshType::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23265264);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcMechMeshType::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23267152);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcMechMeshType::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23267744);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

