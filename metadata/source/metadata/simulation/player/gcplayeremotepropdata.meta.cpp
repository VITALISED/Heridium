#include "gcplayeremotepropdata.meta.h"

void cGcPlayerEmotePropData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24597312);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPlayerEmotePropData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24601728);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPlayerEmotePropData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24602768);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

