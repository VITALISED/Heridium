#include "gcantagonistcomponentdata.meta.h"

void cGcAntagonistComponentData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28864352);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcAntagonistComponentData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28873024);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcAntagonistComponentData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28874784);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

