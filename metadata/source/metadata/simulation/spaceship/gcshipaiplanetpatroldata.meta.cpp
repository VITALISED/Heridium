#include "gcshipaiplanetpatroldata.meta.h"

void cGcShipAIPlanetPatrolData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23476896);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcShipAIPlanetPatrolData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23480992);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcShipAIPlanetPatrolData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23482112);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

