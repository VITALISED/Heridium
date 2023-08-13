#include "gcmessagesubstancemined.meta.h"

void cGcMessageSubstanceMined::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30997648);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcMessageSubstanceMined::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(31000176);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcMessageSubstanceMined::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31001200);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

