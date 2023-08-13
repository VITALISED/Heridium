#pragma once
#include "pch.h"

enum eReplicationRange
{
    EReplicationRange_NotSet = 0,
    EReplicationRange_System = 1,
    EReplicationRange_SystemLocal = 2,
    EReplicationRange_Planet = 3,
    EReplicationRange_PlanetLocal = 4,
    EReplicationRange_Space = 5,
    EReplicationRange_SpaceStation = 6,
    EReplicationRange_Nexus = 7,
};

enum eSpawnType
{
    ESpawnType_Basic = 0,
    ESpawnType_Creature = 1,
};

class cTkNetReplicatedEntityComponentData
{
public:
    static const unsigned __int64 muNameHash = 0xDB0FD87A0597E5FD;
    static const unsigned __int64 muTemplateHash = 0x4A0243DD40AA8081;
    static const int miNumMembers = 4;

    cTkDynamicArray<cTkFixedString<128,char>1> maReplicaComponentMask;
    eReplicationRange meReplicationRange;
    eSpawnType meSpawnType;
    bool mbIgnoreComponents;

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
