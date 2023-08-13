#include "gcgenericmissionversionprogress.meta.h"

void cGcGenericMissionVersionProgress::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(25651744);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcGenericMissionVersionProgress::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(25654416);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcGenericMissionVersionProgress::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(25655696);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

