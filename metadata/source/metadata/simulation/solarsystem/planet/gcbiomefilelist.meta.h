#pragma once
#include "pch.h"

class cGcBiomeFileList
{
public:
    static const unsigned __int64 muNameHash = 0x369AF9F4E4E055D0;
    static const unsigned __int64 muTemplateHash = 0xCBE51C9993608260;
    static const int miNumMembers = 4;

    cTkFixedArray<cGcBiomeFileListOptions, 16> maBiomeFiles;
    cTkDynamicArray<cGcBiomeType1> maValidStartPlanetBiome;
    cTkDynamicArray<cGcExternalObjectListOptions1> maCommonExternalObjectLists;
    cTkDynamicArray<cGcExternalObjectFileList1> maOptionalExternalObjectLists;

    static bool ClassPointerCompare(const cTkClassPointer* lPtr, const cTkClassPointer *lOtherPtr);
    static void ClassPointerCopy(cTkClassPointer* lDest, const cTkClassPointer *lSource);
    static cTkClassPointer* ClassPointerCreate(cTkClassPointer* result);
    static void ClassPointerCreateDefault(cTkClassPointer* lPtr, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerDestroy(cTkClassPointer* lPtr);
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
