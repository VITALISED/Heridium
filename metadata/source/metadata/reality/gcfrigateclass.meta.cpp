#include "gcfrigateclass.meta.h"

void cGcFrigateClass::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30586848);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcFrigateClass::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30590640);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcFrigateClass::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30592064);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

