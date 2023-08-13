#include "gcbytebeatswitchcomponentdata.meta.h"

void cGcByteBeatSwitchComponentData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34847056);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcByteBeatSwitchComponentData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34851312);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcByteBeatSwitchComponentData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34852464);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

