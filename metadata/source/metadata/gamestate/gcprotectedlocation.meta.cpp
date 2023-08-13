#include "gcprotectedlocation.meta.h"

void cGcProtectedLocation::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(33341760);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcProtectedLocation::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(33346752);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcProtectedLocation::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(33347520);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

