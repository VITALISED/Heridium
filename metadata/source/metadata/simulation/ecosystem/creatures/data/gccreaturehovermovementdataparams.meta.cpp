#include "gccreaturehovermovementdataparams.meta.h"

void cGcCreatureHoverMovementDataParams::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28063024);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCreatureHoverMovementDataParams::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28067536);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCreatureHoverMovementDataParams::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28068816);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

