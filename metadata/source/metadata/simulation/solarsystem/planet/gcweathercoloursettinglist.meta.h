#pragma once
#include "../../../../../../pch.h"

#include "../../../../../../metadata/source/metadata/simulation/solarsystem/planet/gcplanetweathercolourdata.meta.h"

class cGcWeatherColourSettingList
{
public:
    static const unsigned __int64 muNameHash = 0xB5D0CD9B9ED4C2E8;
    static const unsigned __int64 muTemplateHash = 0xDA91BB5D56A58448;
    static const int miNumMembers = 1;

    cTkDynamicArray<cGcPlanetWeatherColourData> maSettings;

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
