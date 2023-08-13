#include "gcrealitymanagerdata.meta.h"

void cGcRealityManagerData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30097488);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRealityManagerData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30101488);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRealityManagerData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30101824);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

