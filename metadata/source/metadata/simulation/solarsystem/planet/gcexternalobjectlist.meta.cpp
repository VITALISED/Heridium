#include "gcexternalobjectlist.meta.h"

void cGcExternalObjectList::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24119376);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcExternalObjectList::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24123984);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcExternalObjectList::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24125216);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

