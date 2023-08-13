#pragma once
#include "../../../../../../../pch.h"

enum eCreatureRole
{
    ECreatureRole_None = 0,
    ECreatureRole_Predator = 1,
    ECreatureRole_PlayerPredator = 2,
    ECreatureRole_Prey = 3,
    ECreatureRole_Passive = 4,
    ECreatureRole_Bird = 5,
    ECreatureRole_FishPrey = 6,
    ECreatureRole_FishPredator = 7,
    ECreatureRole_Butterfly = 8,
    ECreatureRole_Robot = 9,
    ECreatureRole_Pet = 10,
};

class cGcCreatureRoles
{
    static const unsigned __int64 muNameHash = 0xA8AB3ECD5F81E80C;
    static const unsigned __int64 muTemplateHash = 0xEAA141147D899B8;
    static const int miNumMembers = 1;

    eCreatureRole meCreatureRole;

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
