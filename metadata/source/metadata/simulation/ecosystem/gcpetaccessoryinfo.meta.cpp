#include "gcpetaccessoryinfo.meta.h"

void cGcPetAccessoryInfo::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27449360);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPetAccessoryInfo::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27452960);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPetAccessoryInfo::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27454112);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

