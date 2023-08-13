#pragma once

#include "../../../../../../../pch.h"
class cGcCreatureTypes;
class cGcAISpaceshipTypes;

enum eSpawnerMode
{
    ESpawnerMode_Hidden = 0,
    ESpawnerMode_Visible = 1,
    ESpawnerMode_HideOnSpawn = 2,
    ESpawnerMode_HiddenTimer = 3,
};
class cGcResourceElement;

class cGcCreatureSpawnComponentData
{
    static const unsigned __int64 muNameHash = 14701733916235101086;
    static const unsigned __int64 muTemplateHash = 9027578452349091554;
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
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
