#include "gcplayercontrolinputremap.meta.h"

void cGcPlayerControlInputRemap::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28872288);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPlayerControlInputRemap::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28874624);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPlayerControlInputRemap::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28875504);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

