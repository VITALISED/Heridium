#include "gcnguistyleanimationdata.meta.h"

void cGcNGuiStyleAnimationData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(31120544);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcNGuiStyleAnimationData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(31124144);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcNGuiStyleAnimationData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31125360);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

