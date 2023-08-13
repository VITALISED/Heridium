#include "gcsmokebotplanetreport.meta.h"

void cGcSmokeBotPlanetReport::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24230320);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSmokeBotPlanetReport::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24234288);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSmokeBotPlanetReport::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24235392);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

