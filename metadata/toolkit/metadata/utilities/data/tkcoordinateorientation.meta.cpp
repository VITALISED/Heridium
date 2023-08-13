#include "tkcoordinateorientation.meta.h"

void cTkCoordinateOrientation::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21370368);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkCoordinateOrientation::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21377584);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkCoordinateOrientation::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21379184);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

