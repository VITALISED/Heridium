#include "gccostinstalledtech.meta.h"

void cGcCostInstalledTech::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30783232);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCostInstalledTech::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30786160);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCostInstalledTech::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30787232);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

