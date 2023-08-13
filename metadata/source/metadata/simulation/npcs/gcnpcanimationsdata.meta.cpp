#include "gcnpcanimationsdata.meta.h"

void cGcNPCAnimationsData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24949088);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcNPCAnimationsData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24955248);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcNPCAnimationsData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24956672);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

