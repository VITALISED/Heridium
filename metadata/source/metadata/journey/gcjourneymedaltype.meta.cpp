#include "gcjourneymedaltype.meta.h"

void cGcJourneyMedalType::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30993760);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcJourneyMedalType::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30999456);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcJourneyMedalType::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31000816);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

