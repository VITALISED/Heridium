#include "gcfrigateclasscost.meta.h"

void cGcFrigateClassCost::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(26473184);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcFrigateClassCost::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(26479600);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcFrigateClassCost::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(26481264);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

