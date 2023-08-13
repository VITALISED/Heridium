#include "gcplayerdamagedata.meta.h"

void cGcPlayerDamageData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30354400);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPlayerDamageData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30357920);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPlayerDamageData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30359104);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

