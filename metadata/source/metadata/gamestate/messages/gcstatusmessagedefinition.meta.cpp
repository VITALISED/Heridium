#include "gcstatusmessagedefinition.meta.h"

void cGcStatusMessageDefinition::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(33120960);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcStatusMessageDefinition::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(33123536);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcStatusMessageDefinition::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(33124560);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

