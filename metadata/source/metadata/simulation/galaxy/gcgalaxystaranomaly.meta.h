#pragma once
#include "pch.h"

enum eGalaxyStarAnomaly
{
    EGalaxyStarAnomaly_None = 0,
    EGalaxyStarAnomaly_AtlasStation = 1,
    EGalaxyStarAnomaly_AtlasStationFinal = 2,
    EGalaxyStarAnomaly_BlackHole = 3,
    EGalaxyStarAnomaly_MiniStation = 4,
};

class cGcGalaxyStarAnomaly
{
public:
    static const unsigned __int64 muNameHash = 0x6488969F6CD933A4;
    static const unsigned __int64 muTemplateHash = 0xC7BB011FDDE5C738;
    static const int miNumMembers = 1;

    eGalaxyStarAnomaly meGalaxyStarAnomaly;

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
