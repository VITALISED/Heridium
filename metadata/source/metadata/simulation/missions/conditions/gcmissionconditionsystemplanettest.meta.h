#pragma once
#include "../../../../../../pch.h"

#include "../../../../../../metadata/source/metadata/simulation/player/gcplayerhazardtype.meta.h"

class cGcMissionConditionSystemPlanetTest
{
public:
    static const unsigned __int64 muNameHash = 0xB22694B55382153C;
    static const unsigned __int64 muTemplateHash = 0xC29C748FF36DBEF7;
    static const int miNumMembers = 2;

    bool mbRequiresExtremePlanet;
    cGcPlayerHazardType mPlanetWeatherRequirement;

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
