#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/source/metadata/simulation/solarsystem/gcsolarsystemlocatorchoice.meta.h"

class cGcAsteroidGeneratorAssignment
{
public:
    static const unsigned __int64 muNameHash = 0xA3D40DA508711D13;
    static const unsigned __int64 muTemplateHash = 0xD35227A699C8923E;
    static const int miNumMembers = 4;

    int miPlanetIndex;
    cGcSolarSystemLocatorChoice mLocator;
    cTkSeed mSeed;
    int miAsteroidCount;

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
