#include "gcfactionselectoptions.meta.h"

void cGcFactionSelectOptions::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(25649968);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcFactionSelectOptions::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(25654176);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcFactionSelectOptions::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(25655552);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

