#include "tkscenenodeattributedata.meta.h"

void cTkSceneNodeAttributeData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21709104);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkSceneNodeAttributeData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21711728);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkSceneNodeAttributeData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21712976);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

