#include "gcbiomecloudsettings.meta.h"

void cGcBiomeCloudSettings::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24116464);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcBiomeCloudSettings::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24123264);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcBiomeCloudSettings::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24124784);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

