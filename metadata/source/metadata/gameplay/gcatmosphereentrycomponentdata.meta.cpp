#include "gcatmosphereentrycomponentdata.meta.h"

void cGcAtmosphereEntryComponentData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34845584);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcAtmosphereEntryComponentData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34850912);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcAtmosphereEntryComponentData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34852272);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

