#include "gcregionhotspotsubstance.meta.h"

void cGcRegionHotspotSubstance::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(26309936);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRegionHotspotSubstance::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(26313280);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRegionHotspotSubstance::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(26314160);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

