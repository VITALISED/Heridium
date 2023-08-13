#include "gclinknetworktypes.meta.h"

void cGcLinkNetworkTypes::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34207888);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcLinkNetworkTypes::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34212528);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcLinkNetworkTypes::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34213824);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

