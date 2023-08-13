#include "gcrefinerunitcomponentdata.meta.h"

void cGcRefinerUnitComponentData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28761104);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRefinerUnitComponentData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28763792);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRefinerUnitComponentData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28764480);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

