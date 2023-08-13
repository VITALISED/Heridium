#include "gcdistancescalecomponentdata.meta.h"

void cGcDistanceScaleComponentData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34742752);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcDistanceScaleComponentData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34747808);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcDistanceScaleComponentData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34749008);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

