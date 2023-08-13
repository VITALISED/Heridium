#include "tkstaticphysicscomponentdata.meta.h"

void cTkStaticPhysicsComponentData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22313792);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkStaticPhysicsComponentData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22315216);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkStaticPhysicsComponentData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22315808);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

