#pragma once
#include "../../../../pch.h"

enum eProceduralProductCategory
{
    EProceduralProductCategory_Loot = 0,
    EProceduralProductCategory_Document = 1,
    EProceduralProductCategory_BioSample = 2,
    EProceduralProductCategory_Fossil = 3,
    EProceduralProductCategory_Plant = 4,
    EProceduralProductCategory_Tool = 5,
    EProceduralProductCategory_Farm = 6,
    EProceduralProductCategory_SeaLoot = 7,
    EProceduralProductCategory_SeaHorror = 8,
    EProceduralProductCategory_Salvage = 9,
    EProceduralProductCategory_Bones = 10,
    EProceduralProductCategory_SpaceHorror = 11,
    EProceduralProductCategory_SpaceBones = 12,
    EProceduralProductCategory_FreighterPassword = 13,
    EProceduralProductCategory_FreighterCaptLog = 14,
    EProceduralProductCategory_FreighterCrewList = 15,
    EProceduralProductCategory_FreighterTechHyp = 16,
    EProceduralProductCategory_FreighterTechSpeed = 17,
    EProceduralProductCategory_FreighterTechFuel = 18,
    EProceduralProductCategory_FreighterTechTrade = 19,
    EProceduralProductCategory_FreighterTechCombat = 20,
    EProceduralProductCategory_FreighterTechMine = 21,
    EProceduralProductCategory_FreighterTechExp = 22,
    EProceduralProductCategory_DismantleBio = 23,
    EProceduralProductCategory_DismantleTech = 24,
    EProceduralProductCategory_DismantleData = 25,
};

class cGcProceduralProductCategory
{
public:
    static const unsigned __int64 muNameHash = 0xE70B813560D9BFCE;
    static const unsigned __int64 muTemplateHash = 0xFA93FE2A4CC8CA8A;
    static const int miNumMembers = 1;

    eProceduralProductCategory meProceduralProductCategory;

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
