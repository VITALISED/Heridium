#pragma once
#include "../../../../../../pch.h"

enum eWonderPlanetCategory
{
    EWonderPlanetCategory_TemperatureMax = 0,
    EWonderPlanetCategory_TemperatureMin = 1,
    EWonderPlanetCategory_ToxicityMax = 2,
    EWonderPlanetCategory_RadiationMax = 3,
    EWonderPlanetCategory_AnomalyMax = 4,
    EWonderPlanetCategory_RadiusMax = 5,
    EWonderPlanetCategory_RadiusMin = 6,
    EWonderPlanetCategory_AltitudeReachedMax = 7,
    EWonderPlanetCategory_AltitudeReachedMin = 8,
    EWonderPlanetCategory_PerfectionMax = 9,
    EWonderPlanetCategory_PerfectionMin = 10,
};

class cGcWonderPlanetCategory
{
    static const unsigned __int64 muNameHash = 0x1496B0F5A0E7C1DE;
    static const unsigned __int64 muTemplateHash = 0x974FA15CCF1DC507;
    static const int miNumMembers = 1;

    eWonderPlanetCategory meWonderPlanetCategory;

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
