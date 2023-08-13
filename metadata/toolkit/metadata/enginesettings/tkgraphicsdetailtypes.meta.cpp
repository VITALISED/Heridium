#include "tkgraphicsdetailtypes.meta.h"

void cTkGraphicsDetailTypes::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22145472);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkGraphicsDetailTypes::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22147648);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkGraphicsDetailTypes::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22148352);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

