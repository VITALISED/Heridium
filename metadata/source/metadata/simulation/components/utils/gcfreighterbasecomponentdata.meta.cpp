#include "gcfreighterbasecomponentdata.meta.h"

void cGcFreighterBaseComponentData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28600768);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcFreighterBaseComponentData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28605328);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcFreighterBaseComponentData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28606624);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

