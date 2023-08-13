#pragma once
#include "../../../../../../../../pch.h"

enum eDirection
{
    EDirection_Left = 0,
    EDirection_Back = 1,
    EDirection_Right = 2,
    EDirection_Forward = 3,
    EDirection_LeftBack = 4,
    EDirection_RightBack = 5,
    EDirection_RightForward = 6,
    EDirection_LeftForward = 7,
    EDirection_All = 8,
};

enum eLevels
{
    ELevels_Lower = 0,
    ELevels_Upper = 1,
    ELevels_Both = 2,
};

enum eTerrain
{
    ETerrain_RequireAbove = 0,
    ETerrain_RequireBelow = 1,
};

class cGcWFCTerrainConstraint
{
    static const unsigned __int64 muNameHash = 0xF0679B25F5343B25;
    static const unsigned __int64 muTemplateHash = 0x48FCC1BDF4A692B3;
    static const int miNumMembers = 3;

    eDirection meDirection;
    eLevels meLevels;
    eTerrain meTerrain;

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
