#include "tkanimdetailsettings.meta.h"

void cTkAnimDetailSettings::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22142688);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkAnimDetailSettings::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22147008);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkAnimDetailSettings::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22147968);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

