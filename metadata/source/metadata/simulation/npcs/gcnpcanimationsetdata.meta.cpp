#include "gcnpcanimationsetdata.meta.h"

void cGcNPCAnimationSetData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24948608);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcNPCAnimationSetData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24955168);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcNPCAnimationSetData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24956624);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

