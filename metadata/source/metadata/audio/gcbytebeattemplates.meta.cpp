#include "gcbytebeattemplates.meta.h"

void cGcByteBeatTemplates::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34972864);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcByteBeatTemplates::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34976320);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcByteBeatTemplates::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34977312);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

