#include "gcprojectileimpactdata.meta.h"

void cGcProjectileImpactData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24384416);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcProjectileImpactData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24386960);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcProjectileImpactData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24387648);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

