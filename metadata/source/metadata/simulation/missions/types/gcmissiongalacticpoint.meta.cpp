#include "gcmissiongalacticpoint.meta.h"

void cGcMissionGalacticPoint::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(25054336);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcMissionGalacticPoint::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(25060496);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcMissionGalacticPoint::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(25062000);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

