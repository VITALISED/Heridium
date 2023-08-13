#include "gcwonderrecord.meta.h"

void cGcWonderRecord::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22500816);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcWonderRecord::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22505520);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcWonderRecord::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22506736);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

