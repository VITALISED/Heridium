#include "gcattachmentpointset.meta.h"

void cGcAttachmentPointSet::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34971408);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcAttachmentPointSet::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34975920);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcAttachmentPointSet::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34977072);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

