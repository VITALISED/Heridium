#include "gcshipaideathdata.meta.h"

void cGcShipAIDeathData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23476224);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcShipAIDeathData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23480832);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcShipAIDeathData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23482016);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

