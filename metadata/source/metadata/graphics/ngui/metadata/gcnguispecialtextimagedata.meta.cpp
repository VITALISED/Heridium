#include "gcnguispecialtextimagedata.meta.h"

void cGcNGuiSpecialTextImageData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(31228784);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcNGuiSpecialTextImageData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(31232240);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcNGuiSpecialTextImageData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31233456);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

