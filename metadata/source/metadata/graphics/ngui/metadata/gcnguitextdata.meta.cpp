#include "gcnguitextdata.meta.h"

void cGcNGuiTextData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(31121168);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcNGuiTextData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(31124304);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcNGuiTextData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31125456);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

