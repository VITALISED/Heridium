#include "gcplayerstickdata.meta.h"

void cGcPlayerStickData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24598880);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPlayerStickData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24602048);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPlayerStickData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24602960);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

