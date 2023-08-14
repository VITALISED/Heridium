#pragma once
#include "../../../../../../pch.h"

class cGcPlanetHazardData
{
public:
    static const unsigned __int64 muNameHash = 0x3DB976BCF84F474B;
    static const unsigned __int64 muTemplateHash = 0xF74DD90BA5596BD5;
    static const int miNumMembers = 4;

    cTkFixedArray<float, 5> maTemperature;
    cTkFixedArray<float, 5> maToxicity;
    cTkFixedArray<float, 5> maRadiation;
    cTkFixedArray<float, 5> maLifeSupportDrain;

    static bool ClassPointerCompare(const cTkClassPointer* lPtr, const cTkClassPointer *lOtherPtr);
    static void ClassPointerCopy(cTkClassPointer* lDest, const cTkClassPointer *lSource);
    static cTkClassPointer* ClassPointerCreate(cTkClassPointer* result);
    static void ClassPointerCreateDefault(cTkClassPointer* lPtr, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerDestroy(cTkClassPointer* lPtr);
    static void ClassPointerFix(cTkClassPointer* lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
