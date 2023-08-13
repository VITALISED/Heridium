#include "tkinteractivitydata.meta.h"

void cTkInteractivityData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21598304);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkInteractivityData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21603488);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkInteractivityData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21604992);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

