#include "gcspaceskycoloursettinglist.meta.h"

void cGcSpaceSkyColourSettingList::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23866880);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSpaceSkyColourSettingList::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23869472);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSpaceSkyColourSettingList::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23870512);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

