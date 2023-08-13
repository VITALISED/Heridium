#include "gccreatureaudiotable.meta.h"

void cGcCreatureAudioTable::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27871824);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCreatureAudioTable::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27878096);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCreatureAudioTable::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27879696);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

