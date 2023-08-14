#pragma once
#include "../../../../../pch.h"

enum eBuildingDensity
{
    EBuildingDensity_Dead = 0,
    EBuildingDensity_Low = 1,
    EBuildingDensity_Mid = 2,
    EBuildingDensity_Full = 3,
    EBuildingDensity_Weird = 4,
    EBuildingDensity_HalfWeird = 5,
};

class cGcBuildingDensityLevels
{
public:
    static const unsigned __int64 muNameHash = 0x43EB5D40DE6AD28E;
    static const unsigned __int64 muTemplateHash = 0x84AE876DD70E705A;
    static const int miNumMembers = 1;

    eBuildingDensity meBuildingDensity;

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
