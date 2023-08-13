#include "tksceneboneremapping.meta.h"

void cTkSceneBoneRemapping::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21708544);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkSceneBoneRemapping::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21711568);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkSceneBoneRemapping::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21712880);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

