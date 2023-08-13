#pragma once

#include "../../../../../../../pch.h"
class cTkNoiseFlattenOptions;

class cGcBuildingDefinitionData
{
    static const unsigned __int64 muNameHash = 6459342982060160671;
    static const unsigned __int64 muTemplateHash = 5670622564832966898;
    static const int miNumMembers = 13;

    cTkNoiseFlattenOptions mFlattenType;
    TkID<128> mClusterLayout;
    float mfClusterSpacing;
    cTkFixedArray<float> maDensity;
    bool mbEnabledWhenPlanetHasNoNPCs;
    int miNumOverridesToGenerate;
    int miNumModelsToGenerate;
    TkID<256> mTextureNameHint;
    float mfOverrideRadius;
    bool mbGivesShelter;
    float mfMinHeight;
    float mfMaxHeight;
    bool mbIgnoreParticlesInAABB;

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