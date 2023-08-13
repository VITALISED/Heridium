#include "gcmissionsequenceexplorationlogspecial.meta.h"

void cGcMissionSequenceExplorationLogSpecial::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(25328672);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcMissionSequenceExplorationLogSpecial::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(25334448);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcMissionSequenceExplorationLogSpecial::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(25335824);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

