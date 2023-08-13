#include "gcinteractiondof.meta.h"

void cGcInteractionDof::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28758240);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcInteractionDof::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28763232);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcInteractionDof::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28764192);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

