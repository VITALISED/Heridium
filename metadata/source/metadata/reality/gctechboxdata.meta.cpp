#include "gctechboxdata.meta.h"

void cGcTechBoxData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29185312);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcTechBoxData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29190528);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcTechBoxData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29191664);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

