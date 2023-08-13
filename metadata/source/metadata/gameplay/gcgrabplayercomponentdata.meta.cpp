#include "gcgrabplayercomponentdata.meta.h"

void cGcGrabPlayerComponentData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34744848);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcGrabPlayerComponentData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34748288);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcGrabPlayerComponentData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34749296);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

