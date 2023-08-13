#include "gcmessagerequestwarp.meta.h"

void cGcMessageRequestWarp::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30997408);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcMessageRequestWarp::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(31000096);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcMessageRequestWarp::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31001152);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

