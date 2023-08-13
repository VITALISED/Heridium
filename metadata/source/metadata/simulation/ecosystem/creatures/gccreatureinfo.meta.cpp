#include "gccreatureinfo.meta.h"

void cGcCreatureInfo::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27874864);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCreatureInfo::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27878896);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCreatureInfo::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27880176);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

