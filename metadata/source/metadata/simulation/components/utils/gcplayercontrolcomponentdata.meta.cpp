#include "gcplayercontrolcomponentdata.meta.h"

void cGcPlayerControlComponentData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28603104);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPlayerControlComponentData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28605888);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPlayerControlComponentData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28606960);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

