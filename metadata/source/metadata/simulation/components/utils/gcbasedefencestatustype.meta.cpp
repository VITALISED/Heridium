#include "gcbasedefencestatustype.meta.h"

void cGcBaseDefenceStatusType::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28597744);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcBaseDefenceStatusType::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28604528);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcBaseDefenceStatusType::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28606192);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

