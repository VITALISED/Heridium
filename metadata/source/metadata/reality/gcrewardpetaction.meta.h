#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/simulation/ecosystem/creatures/data/gccreaturepetrewardactions.meta.h"

class cGcRewardPetAction
{
public:
    static const unsigned __int64 muNameHash = 0x76B0722D154CFD89;
    static const unsigned __int64 muTemplateHash = 0x2452EC99FC0C771B;
    static const int miNumMembers = 5;

    cGcCreaturePetRewardActions mPetAction;
    TkID<128> mPlayerEmoteID;
    TkID<128> mEffectID;
    TkID<128> mSpecialHarvestID;
    int miSpecialHarvestMul;

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
