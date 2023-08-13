#include "gcnguispecialtextstyledata.meta.h"

void cGcNGuiSpecialTextStyleData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(31229376);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcNGuiSpecialTextStyleData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(31232400);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcNGuiSpecialTextStyleData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31233552);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

