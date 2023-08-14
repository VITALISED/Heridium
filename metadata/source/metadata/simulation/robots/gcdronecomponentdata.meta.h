#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/source/metadata/simulation/ecosystem/creatures/behaviours/data/gcprimaryaxis.meta.h"
#include "../../../../../metadata/source/metadata/simulation/ecosystem/creatures/data/gccreaturehealthdata.meta.h"
#include "../../../../../metadata/source/metadata/gameplay/gcdronegun.meta.h"

class cGcDroneComponentData
{
public:
    static const unsigned __int64 muNameHash = 0xE4A9F22B5EB5CBF8;
    static const unsigned __int64 muTemplateHash = 0x5FD10D87A7979DA5;
    static const int miNumMembers = 6;

    TkID<128> mId;
    cGcPrimaryAxis mAxis;
    float mfScaler;
    cGcCreatureHealthData mHealth;
    cTkDynamicArray<TkID<128> > maProjectileChoices;
    cTkDynamicArray<cGcDroneGun> maGuns;

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
