#pragma once
#include "../../../../../../../../pch.h"

enum eBiomeSubType
{
    EBiomeSubType_None = 0,
    EBiomeSubType_Standard = 1,
    EBiomeSubType_HighQuality = 2,
    EBiomeSubType_Structure = 3,
    EBiomeSubType_Beam = 4,
    EBiomeSubType_Hexagon = 5,
    EBiomeSubType_FractCube = 6,
    EBiomeSubType_Bubble = 7,
    EBiomeSubType_Shards = 8,
    EBiomeSubType_Contour = 9,
    EBiomeSubType_Shell = 10,
    EBiomeSubType_BoneSpire = 11,
    EBiomeSubType_WireCell = 12,
    EBiomeSubType_HydroGarden = 13,
    EBiomeSubType_HugePlant = 14,
    EBiomeSubType_HugeLush = 15,
    EBiomeSubType_HugeRing = 16,
    EBiomeSubType_HugeRock = 17,
    EBiomeSubType_HugeScorch = 18,
    EBiomeSubType_HugeToxic = 19,
    EBiomeSubType_Variant_A = 20,
    EBiomeSubType_Variant_B = 21,
    EBiomeSubType_Variant_C = 22,
    EBiomeSubType_Variant_D = 23,
    EBiomeSubType_Infested = 24,
    EBiomeSubType_Swamp = 25,
    EBiomeSubType_Lava = 26,
};

class cGcBiomeSubType
{
    static const unsigned __int64 muNameHash = 0xE8FE27493120750F;
    static const unsigned __int64 muTemplateHash = 0xAA4AA33B8FCAE03E;
    static const int miNumMembers = 1;

    eBiomeSubType meBiomeSubType;

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
