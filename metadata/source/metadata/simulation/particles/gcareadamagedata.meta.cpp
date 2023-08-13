#include "gcareadamagedata.meta.h"

void cGcAreaDamageData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24711920);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcAreaDamageData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24719440);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcAreaDamageData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24721120);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

