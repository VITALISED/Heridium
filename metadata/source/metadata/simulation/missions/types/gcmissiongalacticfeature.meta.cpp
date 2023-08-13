#include "gcmissiongalacticfeature.meta.h"

void cGcMissionGalacticFeature::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(25054016);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcMissionGalacticFeature::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(25060416);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcMissionGalacticFeature::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(25061952);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

