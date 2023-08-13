#include "gcnguispecialtextstyles.meta.h"

void cGcNGuiSpecialTextStyles::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(31120288);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcNGuiSpecialTextStyles::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(31124064);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcNGuiSpecialTextStyles::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31125312);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

