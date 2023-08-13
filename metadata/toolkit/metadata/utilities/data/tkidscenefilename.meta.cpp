#include "tkidscenefilename.meta.h"

void cTkIdSceneFilename::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21373456);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkIdSceneFilename::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21378224);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkIdSceneFilename::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21379568);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

