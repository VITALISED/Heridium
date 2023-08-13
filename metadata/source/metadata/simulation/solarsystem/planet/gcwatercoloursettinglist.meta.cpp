#include "gcwatercoloursettinglist.meta.h"

void cGcWaterColourSettingList::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23763536);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcWaterColourSettingList::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23765920);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcWaterColourSettingList::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23766896);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

