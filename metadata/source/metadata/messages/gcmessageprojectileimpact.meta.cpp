#include "gcmessageprojectileimpact.meta.h"

void cGcMessageProjectileImpact::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30996528);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcMessageProjectileImpact::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30999856);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcMessageProjectileImpact::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31001056);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

