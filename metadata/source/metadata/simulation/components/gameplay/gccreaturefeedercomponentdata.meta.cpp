#include "gccreaturefeedercomponentdata.meta.h"

void cGcCreatureFeederComponentData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28866304);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCreatureFeederComponentData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28873504);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCreatureFeederComponentData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28874976);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

