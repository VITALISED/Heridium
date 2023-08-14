#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/source/metadata/reality/gcrealitycommonfactions.meta.h"
#include "../../../../../metadata/source/metadata/simulation/spaceship/ai/gcaispaceshiproles.meta.h"

class cGcButtonSpawnOffset
{
public:
    static const unsigned __int64 muNameHash = 0x42A6687A1AF1F42A;
    static const unsigned __int64 muTemplateHash = 0x31748E19E8D4B7B8;
    static const int miNumMembers = 8;

    float mfAngleMin;
    float mfAngleMax;
    float mfOffset;
    float mfSpacing;
    float mfFacing;
    int miCount;
    cGcRealityCommonFactions mFaction;
    cGcAISpaceshipRoles mShipRole;

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
