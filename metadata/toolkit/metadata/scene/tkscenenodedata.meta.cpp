#include "tkscenenodedata.meta.h"

void cTkSceneNodeData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21709424);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkSceneNodeData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21711808);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkSceneNodeData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21713024);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

