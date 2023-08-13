#include "tkheavyairsystem.meta.h"

void cTkHeavyAirSystem::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21372880);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkHeavyAirSystem::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21378144);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkHeavyAirSystem::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21379520);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

