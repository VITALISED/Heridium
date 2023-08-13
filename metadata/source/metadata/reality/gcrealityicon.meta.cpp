#include "gcrealityicon.meta.h"

void cGcRealityIcon::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30096544);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRealityIcon::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30101328);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRealityIcon::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30101728);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

