#include "gcsolarsystemclass.meta.h"

void cGcSolarSystemClass::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23866256);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSolarSystemClass::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23869312);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSolarSystemClass::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23870416);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

