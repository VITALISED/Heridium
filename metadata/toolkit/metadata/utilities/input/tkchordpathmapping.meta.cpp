#include "tkchordpathmapping.meta.h"

void cTkChordPathMapping::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21094640);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkChordPathMapping::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21098080);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkChordPathMapping::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21099168);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

