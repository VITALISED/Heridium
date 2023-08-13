#include "gcplayerstatedata.meta.h"

void cGcPlayerStateData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(33564096);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPlayerStateData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(33569952);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPlayerStateData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(33570080);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

