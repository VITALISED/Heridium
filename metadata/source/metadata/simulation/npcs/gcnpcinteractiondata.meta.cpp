#include "gcnpcinteractiondata.meta.h"

void cGcNPCInteractionData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24951152);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcNPCInteractionData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24955568);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcNPCInteractionData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24956864);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

