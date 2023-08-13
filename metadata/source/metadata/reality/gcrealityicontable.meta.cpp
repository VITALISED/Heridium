#include "gcrealityicontable.meta.h"

void cGcRealityIconTable::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30096880);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRealityIconTable::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30101408);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRealityIconTable::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30101776);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

