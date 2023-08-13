#include "gcprojectileimpacttype.meta.h"

void cGcProjectileImpactType::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24384928);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcProjectileImpactType::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24387040);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcProjectileImpactType::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24387696);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

