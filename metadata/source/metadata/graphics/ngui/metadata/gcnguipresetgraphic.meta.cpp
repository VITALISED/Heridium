#include "gcnguipresetgraphic.meta.h"

void cGcNGuiPresetGraphic::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(31227312);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcNGuiPresetGraphic::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(31232000);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcNGuiPresetGraphic::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31233312);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

