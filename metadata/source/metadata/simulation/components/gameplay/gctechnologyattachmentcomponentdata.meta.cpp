#include "gctechnologyattachmentcomponentdata.meta.h"

void cGcTechnologyAttachmentComponentData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28762832);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcTechnologyAttachmentComponentData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28764112);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcTechnologyAttachmentComponentData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28764672);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

