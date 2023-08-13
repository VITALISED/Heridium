#include "gcnguielementdata.meta.h"

void cGcNGuiElementData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(31224544);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcNGuiElementData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(31231520);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcNGuiElementData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31233024);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

