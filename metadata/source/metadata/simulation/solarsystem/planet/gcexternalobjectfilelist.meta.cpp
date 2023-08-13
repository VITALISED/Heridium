#include "gcexternalobjectfilelist.meta.h"

void cGcExternalObjectFileList::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24119072);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcExternalObjectFileList::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24123904);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcExternalObjectFileList::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24125168);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

