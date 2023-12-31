#pragma once
#include "../../../../pch.h"

class cGcAdvancedTweaks
{
public:
    static const unsigned __int64 muNameHash = 0x1C1691C0F8971C4A;
    static const unsigned __int64 muTemplateHash = 0x6E9D7EAB573C6CD6;
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
    static void ClassPointerFix(cTkClassPointer* lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
