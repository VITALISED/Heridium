#include "gcnguiactiondata.meta.h"

void cGcNGuiActionData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(31224128);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcNGuiActionData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(31231440);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcNGuiActionData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31232976);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

