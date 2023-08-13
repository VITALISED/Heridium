#include "gccustomnotifytimeroptions.meta.h"

void cGcCustomNotifyTimerOptions::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(25648224);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCustomNotifyTimerOptions::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(25653696);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCustomNotifyTimerOptions::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(25654976);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

