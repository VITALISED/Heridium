#include "gcmechaudioeventtable.meta.h"

void cGcMechAudioEventTable::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23385216);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcMechAudioEventTable::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23390576);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcMechAudioEventTable::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23391792);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

