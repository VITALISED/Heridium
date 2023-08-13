#include "gcnguilayoutdata.meta.h"

void cGcNGuiLayoutData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(31226528);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcNGuiLayoutData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(31231840);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcNGuiLayoutData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31233216);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

