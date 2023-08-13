#include "gcaispaceshipcomponentdata.meta.h"

void cGcAISpaceshipComponentData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23759968);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcAISpaceshipComponentData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23765200);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcAISpaceshipComponentData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23766464);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

