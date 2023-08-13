#include "gcresourcecollecteffect.meta.h"

void cGcResourceCollectEffect::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27119056);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcResourceCollectEffect::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27124096);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcResourceCollectEffect::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27125024);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

