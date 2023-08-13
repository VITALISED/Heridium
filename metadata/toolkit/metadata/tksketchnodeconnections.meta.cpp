#include "tksketchnodeconnections.meta.h"

void cTkSketchNodeConnections::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21485920);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkSketchNodeConnections::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21488752);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkSketchNodeConnections::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21489760);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

