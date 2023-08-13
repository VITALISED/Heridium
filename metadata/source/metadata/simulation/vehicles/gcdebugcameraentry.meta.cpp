#include "gcdebugcameraentry.meta.h"

void cGcDebugCameraEntry::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23383920);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcDebugCameraEntry::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23390256);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcDebugCameraEntry::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23391600);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

