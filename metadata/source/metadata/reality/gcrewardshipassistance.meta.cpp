#include "gcrewardshipassistance.meta.h"

void cGcRewardShipAssistance::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29624224);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardShipAssistance::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29629568);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardShipAssistance::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29631120);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

