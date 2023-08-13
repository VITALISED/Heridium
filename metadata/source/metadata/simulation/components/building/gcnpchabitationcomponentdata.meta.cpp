#include "gcnpchabitationcomponentdata.meta.h"

void cGcNPCHabitationComponentData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28870896);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcNPCHabitationComponentData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28874384);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcNPCHabitationComponentData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28875360);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

