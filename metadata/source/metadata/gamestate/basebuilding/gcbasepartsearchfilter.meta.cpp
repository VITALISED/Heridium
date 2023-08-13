#include "gcbasepartsearchfilter.meta.h"

void cGcBasePartSearchFilter::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34363760);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcBasePartSearchFilter::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34366464);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcBasePartSearchFilter::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34367376);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

