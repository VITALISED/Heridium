#include "gcantagonistfriend.meta.h"

void cGcAntagonistFriend::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34844496);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcAntagonistFriend::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34850672);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcAntagonistFriend::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34852128);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

