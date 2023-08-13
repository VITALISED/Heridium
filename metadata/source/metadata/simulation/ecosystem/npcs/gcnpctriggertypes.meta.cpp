#include "gcnpctriggertypes.meta.h"

void cGcNPCTriggerTypes::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27448736);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcNPCTriggerTypes::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27452800);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcNPCTriggerTypes::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27454016);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

