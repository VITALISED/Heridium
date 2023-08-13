#include "gcmetaballcomponentdata.meta.h"

void cGcMetaBallComponentData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28602032);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcMetaBallComponentData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28605648);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcMetaBallComponentData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28606816);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

