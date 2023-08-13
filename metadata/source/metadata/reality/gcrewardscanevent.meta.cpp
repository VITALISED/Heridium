#include "gcrewardscanevent.meta.h"

void cGcRewardScanEvent::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29715680);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardScanEvent::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29718704);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardScanEvent::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29720224);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

