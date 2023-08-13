#include "tkcreaturetailcomponentdata.meta.h"

void cTkCreatureTailComponentData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22310512);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkCreatureTailComponentData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22314656);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkCreatureTailComponentData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22315472);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

