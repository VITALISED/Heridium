#include "gcbaseminiportalcomponentdata.meta.h"

void cGcBaseMiniPortalComponentData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34846336);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcBaseMiniPortalComponentData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34851072);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcBaseMiniPortalComponentData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34852368);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

