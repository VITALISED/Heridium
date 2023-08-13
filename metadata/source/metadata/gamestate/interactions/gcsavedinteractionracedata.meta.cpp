#include "gcsavedinteractionracedata.meta.h"

void cGcSavedInteractionRaceData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(33120320);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSavedInteractionRaceData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(33123376);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSavedInteractionRaceData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(33124464);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

