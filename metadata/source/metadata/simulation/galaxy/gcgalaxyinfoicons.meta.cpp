#include "gcgalaxyinfoicons.meta.h"

void cGcGalaxyInfoIcons::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(26693104);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcGalaxyInfoIcons::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(26697744);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcGalaxyInfoIcons::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(26698704);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

