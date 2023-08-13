#include "gcvroverride_text.meta.h"

void cGcVROverride_Text::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(31122944);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcVROverride_Text::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(31124704);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcVROverride_Text::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31125824);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

