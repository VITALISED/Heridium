#include "gcnetworkinterpolationcomponentdata.meta.h"

void cGcNetworkInterpolationComponentData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28690832);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcNetworkInterpolationComponentData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28694032);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcNetworkInterpolationComponentData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28694896);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

