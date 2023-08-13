#include "gcnguipresettext.meta.h"

void cGcNGuiPresetText::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(31227776);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcNGuiPresetText::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(31232080);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcNGuiPresetText::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31233360);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

