#include "gcmissionboardoptions.meta.h"

void cGcMissionBoardOptions::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(25652016);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcMissionBoardOptions::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(25654496);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcMissionBoardOptions::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(25655744);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

