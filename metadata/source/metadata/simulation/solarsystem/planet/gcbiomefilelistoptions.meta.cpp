#include "gcbiomefilelistoptions.meta.h"

void cGcBiomeFileListOptions::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24117984);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcBiomeFileListOptions::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24123584);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcBiomeFileListOptions::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24124976);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

