#include "tkphysicsdata.meta.h"

void cTkPhysicsData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21935216);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkPhysicsData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21937216);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkPhysicsData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21938240);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

