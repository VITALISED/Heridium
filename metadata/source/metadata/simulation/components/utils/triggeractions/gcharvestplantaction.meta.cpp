#include "gcharvestplantaction.meta.h"

void cGcHarvestPlantAction::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28489904);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcHarvestPlantAction::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28495520);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcHarvestPlantAction::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28497104);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

