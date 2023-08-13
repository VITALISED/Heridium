#include "tkphysrelvectordata.meta.h"

void cTkPhysRelVectorData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21708256);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkPhysRelVectorData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21711488);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkPhysRelVectorData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21712832);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

