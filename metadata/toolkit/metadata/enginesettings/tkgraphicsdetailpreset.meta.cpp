#include "tkgraphicsdetailpreset.meta.h"

void cTkGraphicsDetailPreset::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22145120);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkGraphicsDetailPreset::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22147568);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkGraphicsDetailPreset::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22148304);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

