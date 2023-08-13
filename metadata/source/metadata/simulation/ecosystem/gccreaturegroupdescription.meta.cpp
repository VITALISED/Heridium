#include "gccreaturegroupdescription.meta.h"

void cGcCreatureGroupDescription::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27542192);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCreatureGroupDescription::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27548112);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCreatureGroupDescription::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27549440);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

