#pragma once
#include "pch.h"

class cGcWeatherTable
{
public:
    static const unsigned __int64 muNameHash = 0x4452780AB55C81D6;
    static const unsigned __int64 muTemplateHash = 0xE82BC2FFD780DC01;
    static const int miNumMembers = 4;

    cTkFixedArray<cTkFixedString<128,char>, 16> maTable;
    cTkFixedArray<cGcHazardValues, 5> maDefaultTemperature;
    cTkFixedArray<cGcHazardValues, 5> maDefaultToxicity;
    cTkFixedArray<cGcHazardValues, 5> maDefaultRadiation;

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
