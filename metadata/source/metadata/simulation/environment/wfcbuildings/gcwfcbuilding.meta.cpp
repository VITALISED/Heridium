#include "gcwfcbuilding.meta.h"

void cGcWFCBuilding::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(26808912);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcWFCBuilding::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(26811376);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcWFCBuilding::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(26811920);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

