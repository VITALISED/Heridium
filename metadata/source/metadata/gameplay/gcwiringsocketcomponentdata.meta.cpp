#include "gcwiringsocketcomponentdata.meta.h"

void cGcWiringSocketComponentData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34558880);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcWiringSocketComponentData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34560160);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcWiringSocketComponentData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34560960);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

