#include "gcresourceorigin.meta.h"

void cGcResourceOrigin::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27119616);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcResourceOrigin::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27124176);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcResourceOrigin::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27125072);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

