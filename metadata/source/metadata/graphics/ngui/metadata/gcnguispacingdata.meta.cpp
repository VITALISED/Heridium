#include "gcnguispacingdata.meta.h"

void cGcNGuiSpacingData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(31228240);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcNGuiSpacingData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(31232160);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcNGuiSpacingData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31233408);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

