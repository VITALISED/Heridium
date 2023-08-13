#include "tkjointmirroraxis.meta.h"

void cTkJointMirrorAxis::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21934400);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkJointMirrorAxis::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21936976);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkJointMirrorAxis::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21938016);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

