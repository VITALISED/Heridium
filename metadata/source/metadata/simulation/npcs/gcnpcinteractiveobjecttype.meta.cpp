#include "gcnpcinteractiveobjecttype.meta.h"

void cGcNPCInteractiveObjectType::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24952320);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcNPCInteractiveObjectType::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24955888);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcNPCInteractiveObjectType::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24957056);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

