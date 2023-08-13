#include "gcsimpleinteractioncomponentdata.meta.h"

void cGcSimpleInteractionComponentData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34556704);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSimpleInteractionComponentData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34559760);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSimpleInteractionComponentData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34560624);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

