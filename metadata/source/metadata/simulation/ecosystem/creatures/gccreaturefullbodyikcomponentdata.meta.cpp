#include "gccreaturefullbodyikcomponentdata.meta.h"

void cGcCreatureFullBodyIKComponentData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27874176);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCreatureFullBodyIKComponentData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27878736);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCreatureFullBodyIKComponentData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27880080);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

