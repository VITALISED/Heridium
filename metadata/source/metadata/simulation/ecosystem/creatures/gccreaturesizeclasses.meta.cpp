#include "gccreaturesizeclasses.meta.h"

void cGcCreatureSizeClasses::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27875424);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCreatureSizeClasses::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27879056);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCreatureSizeClasses::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27880272);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

