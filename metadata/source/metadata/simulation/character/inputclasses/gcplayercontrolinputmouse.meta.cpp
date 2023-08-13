#include "gcplayercontrolinputmouse.meta.h"

void cGcPlayerControlInputMouse::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28871808);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPlayerControlInputMouse::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28874544);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPlayerControlInputMouse::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28875456);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

