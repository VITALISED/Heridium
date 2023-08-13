#include "gcnpcinteractiveobjectstatetransition.meta.h"

void cGcNPCInteractiveObjectStateTransition::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24952016);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcNPCInteractiveObjectStateTransition::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24955808);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcNPCInteractiveObjectStateTransition::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24957008);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

