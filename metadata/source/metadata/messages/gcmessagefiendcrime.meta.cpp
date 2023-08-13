#include "gcmessagefiendcrime.meta.h"

void cGcMessageFiendCrime::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30994480);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcMessageFiendCrime::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30999616);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcMessageFiendCrime::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31000912);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

