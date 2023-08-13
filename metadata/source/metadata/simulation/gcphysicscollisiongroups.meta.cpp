#include "gcphysicscollisiongroups.meta.h"

void cGcPhysicsCollisionGroups::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(26308576);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPhysicsCollisionGroups::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(26312960);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPhysicsCollisionGroups::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(26313968);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

