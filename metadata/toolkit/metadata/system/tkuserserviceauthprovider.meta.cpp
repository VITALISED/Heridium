#include "tkuserserviceauthprovider.meta.h"

void cTkUserServiceAuthProvider::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21602528);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkUserServiceAuthProvider::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21604528);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkUserServiceAuthProvider::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21605616);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

