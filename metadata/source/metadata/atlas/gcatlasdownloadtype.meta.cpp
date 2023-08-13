#include "gcatlasdownloadtype.meta.h"

void cGcAtlasDownloadType::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(35108336);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcAtlasDownloadType::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(35111088);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcAtlasDownloadType::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(35111872);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

