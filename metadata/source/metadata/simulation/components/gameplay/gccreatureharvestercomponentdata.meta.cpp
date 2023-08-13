#include "gccreatureharvestercomponentdata.meta.h"

void cGcCreatureHarvesterComponentData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28866928);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCreatureHarvesterComponentData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28873584);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCreatureHarvesterComponentData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28875024);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

