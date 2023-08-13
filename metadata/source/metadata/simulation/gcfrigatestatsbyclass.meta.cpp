#include "gcfrigatestatsbyclass.meta.h"

void cGcFrigateStatsByClass::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(26475328);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcFrigateStatsByClass::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(26480160);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcFrigateStatsByClass::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(26481600);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

