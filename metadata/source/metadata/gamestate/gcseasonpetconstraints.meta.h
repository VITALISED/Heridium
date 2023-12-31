#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/simulation/solarsystem/planet/gcbiometype.meta.h"

class cGcSeasonPetConstraints
{
public:
    static const unsigned __int64 muNameHash = 0x154E67C8939691E0;
    static const unsigned __int64 muTemplateHash = 0xFDA422DC68B001D0;
    static const int miNumMembers = 8;

    TkID<128> mCreatureId;
    float mfMinRelativeScale;
    float mfMaxRelativeScale;
    bool mbSpecificBiome;
    cGcBiomeType mBiome;
    float mfStartingTrust;
    unsigned __int64 mui64TimeSinceLastEgg;
    unsigned __int64 mui64TimeSinceBirth;

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
