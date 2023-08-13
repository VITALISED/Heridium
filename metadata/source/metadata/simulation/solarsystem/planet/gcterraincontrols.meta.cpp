#include "gcterraincontrols.meta.h"

void cGcTerrainControls::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23867680);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcTerrainControls::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23869712);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcTerrainControls::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23870656);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

