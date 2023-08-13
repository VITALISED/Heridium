#include "gcnguistyleanimationkeyframedata.meta.h"

void cGcNGuiStyleAnimationKeyframeData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(31120880);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcNGuiStyleAnimationKeyframeData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(31124224);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcNGuiStyleAnimationKeyframeData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31125408);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

