#include "tknguitextstyledata.meta.h"

void cTkNGuiTextStyleData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22051344);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkNGuiTextStyleData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22053520);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkNGuiTextStyleData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22054480);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

