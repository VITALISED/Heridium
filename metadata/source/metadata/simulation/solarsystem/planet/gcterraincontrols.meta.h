#pragma once
#include "../../../../../../pch.h"

class cGcTerrainControls
{
public:
    static const unsigned __int64 muNameHash = 0x2AD2911065D6EA2;
    static const unsigned __int64 muTemplateHash = 0x6E82971E628F0C68;
    static const int miNumMembers = 9;

    cTkFixedArray<float, 8> maNoiseLayers;
    cTkFixedArray<float, 9> maGridLayers;
    cTkFixedArray<float, 7> maFeatures;
    cTkFixedArray<float, 1> maCaves;
    float mfWaterActiveFrequency;
    float mfHighWaterActiveFrequency;
    float mfRockTileFrequency;
    float mfSubstanceTileFrequency;
    bool mbForceContinentalNoise;

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
