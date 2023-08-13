#include "gcterrainedit.meta.h"

void cGcTerrainEdit::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(33121920);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcTerrainEdit::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(33123776);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcTerrainEdit::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(33124704);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

