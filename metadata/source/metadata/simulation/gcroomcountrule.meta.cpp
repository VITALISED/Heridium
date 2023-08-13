#include "gcroomcountrule.meta.h"

void cGcRoomCountRule::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(26311072);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRoomCountRule::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(26313520);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRoomCountRule::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(26314304);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

