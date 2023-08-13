#include "gcantagonistenemy.meta.h"

void cGcAntagonistEnemy::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34844176);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcAntagonistEnemy::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34850592);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcAntagonistEnemy::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34852080);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

