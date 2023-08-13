#include "gcmechmeshpartdata.meta.h"

void cGcMechMeshPartData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23264000);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcMechMeshPartData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23266912);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcMechMeshPartData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23267600);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

