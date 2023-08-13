#include "tkanimposecomponentdata.meta.h"

void cTkAnimPoseComponentData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22420400);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkAnimPoseComponentData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22425376);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkAnimPoseComponentData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22426560);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

