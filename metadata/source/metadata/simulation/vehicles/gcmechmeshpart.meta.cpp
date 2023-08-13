#include "gcmechmeshpart.meta.h"

void cGcMechMeshPart::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23263776);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcMechMeshPart::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23266832);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcMechMeshPart::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23267552);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

