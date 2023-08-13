#include "gcattachmentpointdata.meta.h"

void cGcAttachmentPointData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34971088);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcAttachmentPointData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34975840);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcAttachmentPointData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34977024);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

