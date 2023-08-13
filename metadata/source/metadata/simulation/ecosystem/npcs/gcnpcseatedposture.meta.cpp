#include "gcnpcseatedposture.meta.h"

void cGcNPCSeatedPosture::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27448416);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcNPCSeatedPosture::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27452720);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcNPCSeatedPosture::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27453968);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

