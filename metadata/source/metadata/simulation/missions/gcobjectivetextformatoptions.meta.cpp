#include "gcobjectivetextformatoptions.meta.h"

void cGcObjectiveTextFormatOptions::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(25535552);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcObjectiveTextFormatOptions::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(25538752);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcObjectiveTextFormatOptions::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(25539984);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

