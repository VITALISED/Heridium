#include "gccreatureharvestsubstancelist.meta.h"

void cGcCreatureHarvestSubstanceList::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27874528);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCreatureHarvestSubstanceList::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27878816);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCreatureHarvestSubstanceList::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27880128);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

