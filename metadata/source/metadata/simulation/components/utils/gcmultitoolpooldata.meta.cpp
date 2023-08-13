#include "gcmultitoolpooldata.meta.h"

void cGcMultitoolPoolData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28602416);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcMultitoolPoolData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28605728);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcMultitoolPoolData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28606864);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

