#include "gcwfcdecorationitem.meta.h"

void cGcWFCDecorationItem::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(26922736);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcWFCDecorationItem::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(26927040);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcWFCDecorationItem::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(26928224);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

