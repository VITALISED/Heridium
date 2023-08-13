#include "gcplayereffectscomponentdata.meta.h"

void cGcPlayerEffectsComponentData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28872736);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPlayerEffectsComponentData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28874704);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPlayerEffectsComponentData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28875552);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

