#pragma once
#include "../../../../../pch.h"

enum eNoiseVoxelType
{
    ENoiseVoxelType_Base = 0,
    ENoiseVoxelType_Rock = 1,
    ENoiseVoxelType_Mountain = 2,
    ENoiseVoxelType_Sand = 3,
    ENoiseVoxelType_Cave = 4,
    ENoiseVoxelType_Substance_1 = 5,
    ENoiseVoxelType_Substance_2 = 6,
    ENoiseVoxelType_Substance_3 = 7,
    ENoiseVoxelType_RandomRock = 8,
    ENoiseVoxelType_RandomRockOrSubstance = 9,
};

class cTkNoiseVoxelTypeEnum
{
public:
    static const unsigned __int64 muNameHash = 0xA54BFECBD79D65EE;
    static const unsigned __int64 muTemplateHash = 0x23F660CE1EB9E712;
    static const int miNumMembers = 1;

    eNoiseVoxelType meNoiseVoxelType;

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
