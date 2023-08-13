#include "gcnguifilebrowserrecents.meta.h"

void cGcNGuiFileBrowserRecents::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(31225008);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcNGuiFileBrowserRecents::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(31231600);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcNGuiFileBrowserRecents::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31233072);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

