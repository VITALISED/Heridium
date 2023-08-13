#include "gcdoshipreceivemessage.meta.h"

void cGcDoShipReceiveMessage::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23475040);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcDoShipReceiveMessage::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23480672);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcDoShipReceiveMessage::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23481920);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

