#include "tkentitlementlist.meta.h"

void cTkEntitlementList::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22046576);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkEntitlementList::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22052480);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkEntitlementList::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22053856);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

