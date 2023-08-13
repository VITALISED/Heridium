#pragma once
#include "../../../../../../../../pch.h"

enum eBiome
{
    EBiome_Lush = 0,
    EBiome_Toxic = 1,
    EBiome_Scorched = 2,
    EBiome_Radioactive = 3,
    EBiome_Frozen = 4,
    EBiome_Barren = 5,
    EBiome_Dead = 6,
    EBiome_Weird = 7,
    EBiome_Red = 8,
    EBiome_Green = 9,
    EBiome_Blue = 10,
    EBiome_Test = 11,
    EBiome_Swamp = 12,
    EBiome_Lava = 13,
    EBiome_Waterworld = 14,
    EBiome_All = 15,
};

class cGcBiomeType
{
    static const unsigned __int64 muNameHash = 0x5CEE315FE3457560;
    static const unsigned __int64 muTemplateHash = 0x9F5CC8BA811F301D;
    static const int miNumMembers = 1;

    eBiome meBiome;

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
