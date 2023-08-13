#include "gcbiomefilelistoption.meta.h"

void cGcBiomeFileListOption::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24117712);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcBiomeFileListOption::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24123504);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcBiomeFileListOption::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24124928);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

