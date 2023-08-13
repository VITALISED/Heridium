#include "gcmovementdirection.meta.h"

void cGcMovementDirection::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24714400);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcMovementDirection::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24720080);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcMovementDirection::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24721504);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

