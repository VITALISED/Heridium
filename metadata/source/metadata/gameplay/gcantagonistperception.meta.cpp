#include "gcantagonistperception.meta.h"

void cGcAntagonistPerception::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34845104);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcAntagonistPerception::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34850832);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcAntagonistPerception::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34852224);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

