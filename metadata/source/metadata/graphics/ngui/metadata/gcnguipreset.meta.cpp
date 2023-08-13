#include "gcnguipreset.meta.h"

void cGcNGuiPreset::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(31226896);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcNGuiPreset::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(31231920);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcNGuiPreset::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31233264);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

