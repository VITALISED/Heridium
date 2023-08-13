#include "gcnguigraphicdata.meta.h"

void cGcNGuiGraphicData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(31225312);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcNGuiGraphicData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(31231680);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcNGuiGraphicData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31233120);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

