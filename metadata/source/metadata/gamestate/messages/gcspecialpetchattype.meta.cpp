#include "gcspecialpetchattype.meta.h"

void cGcSpecialPetChatType::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(33120640);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSpecialPetChatType::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(33123456);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSpecialPetChatType::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(33124512);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

