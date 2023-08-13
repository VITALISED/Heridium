#include "tkentitlementlistdata.meta.h"

void cTkEntitlementListData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34850224);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkEntitlementListData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34851952);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkEntitlementListData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34852848);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

