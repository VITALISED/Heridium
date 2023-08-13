#include "gcspawncomponentoption.meta.h"

void cGcSpawnComponentOption::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27451840);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSpawnComponentOption::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27453600);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSpawnComponentOption::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27454496);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

