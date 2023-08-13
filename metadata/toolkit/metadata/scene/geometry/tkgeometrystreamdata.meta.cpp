#include "tkgeometrystreamdata.meta.h"

void cTkGeometryStreamData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21933264);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkGeometryStreamData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21936656);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkGeometryStreamData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21937824);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

