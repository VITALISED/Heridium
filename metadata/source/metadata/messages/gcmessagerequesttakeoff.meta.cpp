#include "gcmessagerequesttakeoff.meta.h"

void cGcMessageRequestTakeOff::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30997136);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcMessageRequestTakeOff::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(31000016);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcMessageRequestTakeOff::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31001104);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

