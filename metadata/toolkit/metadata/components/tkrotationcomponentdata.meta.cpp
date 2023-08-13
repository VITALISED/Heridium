#include "tkrotationcomponentdata.meta.h"

void cTkRotationComponentData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22244720);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkRotationComponentData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22247168);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkRotationComponentData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22248064);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

