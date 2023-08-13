#include "gcalienpodanimparams.meta.h"

void cGcAlienPodAnimParams::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(35105680);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcAlienPodAnimParams::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(35110448);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcAlienPodAnimParams::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(35111488);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

