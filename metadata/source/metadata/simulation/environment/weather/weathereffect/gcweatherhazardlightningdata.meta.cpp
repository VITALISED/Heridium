#include "gcweatherhazardlightningdata.meta.h"

void cGcWeatherHazardLightningData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(26923888);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcWeatherHazardLightningData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(26927360);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcWeatherHazardLightningData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(26928368);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

