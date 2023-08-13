#include "gcproceduralproductdeployable.meta.h"

void cGcProceduralProductDeployable::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30356032);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcProceduralProductDeployable::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30358320);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcProceduralProductDeployable::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30359344);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

