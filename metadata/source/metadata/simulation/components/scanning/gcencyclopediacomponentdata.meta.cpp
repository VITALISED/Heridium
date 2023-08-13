#include "gcencyclopediacomponentdata.meta.h"

void cGcEncyclopediaComponentData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28690160);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcEncyclopediaComponentData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28693872);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcEncyclopediaComponentData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28694800);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

