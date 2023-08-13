#include "tkmodelrenderercameradata.meta.h"

void cTkModelRendererCameraData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21601792);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkModelRendererCameraData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21604368);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkModelRendererCameraData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21605520);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

