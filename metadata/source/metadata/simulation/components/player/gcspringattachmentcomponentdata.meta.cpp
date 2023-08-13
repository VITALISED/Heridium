#include "gcspringattachmentcomponentdata.meta.h"

void cGcSpringAttachmentComponentData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28693472);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSpringAttachmentComponentData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28694672);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSpringAttachmentComponentData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28695184);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

