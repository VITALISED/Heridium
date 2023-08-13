#include "gcrectangularinitialshape.meta.h"

void cGcRectangularInitialShape::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34849888);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRectangularInitialShape::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34851872);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRectangularInitialShape::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34852800);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

