#include "gcmessagecrime.meta.h"

void cGcMessageCrime::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30994080);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcMessageCrime::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30999536);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcMessageCrime::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31000864);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

