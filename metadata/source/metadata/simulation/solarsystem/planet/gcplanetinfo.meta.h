#pragma once
#include "../../../../../../pch.h"

class cGcPlanetInfo
{
public:
    static const unsigned __int64 muNameHash = 0x458D53EF402BA3C9;
    static const unsigned __int64 muTemplateHash = 0x98F6CCB88342CA8;
    static const int miNumMembers = 10;

    cTkFixedString<128,char> macPlanetDescription;
    cTkFixedString<128,char> macPlanetType;
    cTkFixedString<128,char> macWeather;
    cTkFixedString<128,char> macResources;
    cTkFixedString<128,char> macFlora;
    cTkFixedString<128,char> macFauna;
    cTkFixedString<128,char> macSentinels;
    bool mbIsWeatherExtreme;
    bool mbAreSentinelsExtreme;
    bool mbAreSentinelsModerate;

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
