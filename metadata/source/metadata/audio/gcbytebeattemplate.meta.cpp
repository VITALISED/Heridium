#include "gcbytebeattemplate.meta.h"

void cGcByteBeatTemplate::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34972592);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcByteBeatTemplate::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34976240);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcByteBeatTemplate::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34977264);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

