#include "tkanimjointloddata.meta.h"

void cTkAnimJointLODData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22419792);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkAnimJointLODData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22425216);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkAnimJointLODData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22426464);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

