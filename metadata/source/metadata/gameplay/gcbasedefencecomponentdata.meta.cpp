#include "gcbasedefencecomponentdata.meta.h"

void cGcBaseDefenceComponentData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34845952);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcBaseDefenceComponentData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34850992);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcBaseDefenceComponentData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34852320);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

