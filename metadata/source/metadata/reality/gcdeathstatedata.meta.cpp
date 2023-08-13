#include "gcdeathstatedata.meta.h"

void cGcDeathStateData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30582224);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcDeathStateData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30589600);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcDeathStateData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30591440);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

