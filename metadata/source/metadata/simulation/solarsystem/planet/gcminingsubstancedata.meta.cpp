#include "gcminingsubstancedata.meta.h"

void cGcMiningSubstanceData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23988608);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcMiningSubstanceData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23995488);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcMiningSubstanceData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23996736);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

