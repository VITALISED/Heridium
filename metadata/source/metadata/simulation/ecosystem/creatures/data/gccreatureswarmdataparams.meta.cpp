#include "gccreatureswarmdataparams.meta.h"

void cGcCreatureSwarmDataParams::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27953824);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCreatureSwarmDataParams::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27956496);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCreatureSwarmDataParams::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27957088);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

