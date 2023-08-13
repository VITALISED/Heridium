#include "gcbiomefilelist.meta.h"

void cGcBiomeFileList::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24117376);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcBiomeFileList::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24123424);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcBiomeFileList::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24124880);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

