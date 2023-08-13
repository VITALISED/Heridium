#pragma once
#include "../../../../../../pch.h"

enum eCollisionGroup
{
    ECollisionGroup_Normal = 1,
    ECollisionGroup_Water = 2,
    ECollisionGroup_Terrain = 4,
    ECollisionGroup_Substance = 8,
    ECollisionGroup_Asteroid = 16,
    ECollisionGroup_TerrainInstance = 32,
    ECollisionGroup_TerrainActivated = 64,
    ECollisionGroup_Player = 128,
    ECollisionGroup_Creature = 256,
    ECollisionGroup_Spaceship = 512,
    ECollisionGroup_Debris = 1024,
    ECollisionGroup_Shield = 2048,
    ECollisionGroup_Raycast = 4096,
    ECollisionGroup_NetworkPlayer = 8192,
    ECollisionGroup_NPCs = 16384,
    ECollisionGroup_Trigger = 32768,
};

class cGcPhysicsCollisionGroups
{
    static const unsigned __int64 muNameHash = 0x29A5D23AA5A4C794;
    static const unsigned __int64 muTemplateHash = 0x33871F8C1A70C814;
    static const int miNumMembers = 1;

    eCollisionGroup meCollisionGroup;

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
