#include "gcadvancedtweaks.meta.h"

void cGcAdvancedTweaks::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34970528);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcAdvancedTweaks::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34975680);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcAdvancedTweaks::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34976928);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

