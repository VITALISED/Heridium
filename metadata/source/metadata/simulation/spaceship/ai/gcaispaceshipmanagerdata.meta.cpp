#include "gcaispaceshipmanagerdata.meta.h"

void cGcAISpaceshipManagerData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23760624);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcAISpaceshipManagerData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23765360);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcAISpaceshipManagerData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23766560);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

