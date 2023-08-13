#include "gcinteractioncomponentdata.meta.h"

void cGcInteractionComponentData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28870288);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcInteractionComponentData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28874304);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcInteractionComponentData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28875312);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

