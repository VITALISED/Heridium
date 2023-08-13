#pragma once

#include "../../../../../../../../pch.h"
enum eWeather
{
    EWeather_Clear = 0,
    EWeather_Dust = 1,
    EWeather_Humid = 2,
    EWeather_Snow = 3,
    EWeather_Toxic = 4,
    EWeather_Scorched = 5,
    EWeather_Radioactive = 6,
    EWeather_RedWeather = 7,
    EWeather_GreenWeather = 8,
    EWeather_BlueWeather = 9,
    EWeather_Swamp = 10,
    EWeather_Lava = 11,
    EWeather_Bubble = 12,
    EWeather_Weird = 13,
    EWeather_Fire = 14,
    EWeather_ClearCold = 15,
};

class cGcWeatherOptions
{
    static const unsigned __int64 muNameHash = 11722488574076295148;
    static const unsigned __int64 muTemplateHash = 6975483191690725439;
    static const int miNumMembers = 1;

    eWeather meWeather;

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
