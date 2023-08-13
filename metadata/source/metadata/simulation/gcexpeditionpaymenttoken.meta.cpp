#include "gcexpeditionpaymenttoken.meta.h"

void cGcExpeditionPaymentToken::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(26471536);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcExpeditionPaymentToken::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(26479200);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcExpeditionPaymentToken::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(26481024);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

