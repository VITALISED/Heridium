#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/source/metadata/simulation/ecosystem/creatures/gccreaturetypes.meta.h"
#include "../../../../../metadata/source/metadata/simulation/spaceship/ai/gcaispaceshiptypes.meta.h"

enum eSpawnerMode
{
    ESpawnerMode_Hidden = 0,
    ESpawnerMode_Visible = 1,
    ESpawnerMode_HideOnSpawn = 2,
    ESpawnerMode_HiddenTimer = 3,
};
#include "../../../../../metadata/source/metadata/utilities/data/gcresourceelement.meta.h"
#include "../../../../../metadata/source/metadata/simulation/ecosystem/gcspawncomponentoption.meta.h"

class cGcCreatureSpawnComponentData
{
public:
    static const unsigned __int64 muNameHash = 0xCC070D1A8B81739E;
    static const unsigned __int64 muTemplateHash = 0x7D4866C5B23CFEE2;
    static const int miNumMembers = 15;

    TkID<128> mTriggerID;
    cTkFixedString<128,char> macModel;
    TkID<128> mCreature;
    cGcCreatureTypes mCreatureType;
    cGcAISpaceshipTypes mShipAIOverride;
    cTkSeed mSeed;
    int miFunctionKey;
    float mfTriggerDistance;
    float mfScale;
    float mfStartTimeMin;
    float mfStartTimeMax;
    bool mbSpawnAlert;
    eSpawnerMode meSpawnerMode;
    cGcResourceElement mSpecificModel;
    cTkDynamicArray<cGcSpawnComponentOption> maSpawnOptionList;

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
