#include "gcblackboardvaluedecoratordata.meta.h"

void cGcBlackboardValueDecoratorData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28156352);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcBlackboardValueDecoratorData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28159888);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcBlackboardValueDecoratorData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28160864);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

