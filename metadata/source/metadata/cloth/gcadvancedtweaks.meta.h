#pragma once

#include "../../../../../../pch.h"
class cGcAdvancedTweaks
{
    static const unsigned __int64 muNameHash = 2023965340540017738;
    static const unsigned __int64 muTemplateHash = 7970666189883731158;
    static const int miNumMembers = 6;

    float mfParticleKillSpeed;
    float mfParticleKillSpeedWrtFixed;
    float mfEdgeMultiplierForTangentI;
    float mfEdgeMultiplierForTangentJ;
    float mfRenderNormalMultiplier;
    float mfStretchUvsToHideTextureEdges;

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