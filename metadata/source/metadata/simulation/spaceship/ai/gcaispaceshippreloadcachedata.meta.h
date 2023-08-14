#pragma once
#include "../../../../../../pch.h"

#include "../../../../../../metadata/source/metadata/reality/gcrealitycommonfactions.meta.h"
#include "../../../../../../metadata/source/metadata/simulation/spaceship/ai/gcaispaceshiproles.meta.h"
#include "../../../../../../metadata/source/metadata/simulation/gcspaceshipclasses.meta.h"
#include "../../../../../../metadata/source/metadata/reality/gcfrigateclass.meta.h"

class cGcAISpaceshipPreloadCacheData
{
public:
    static const unsigned __int64 muNameHash = 0x74723646531009E2;
    static const unsigned __int64 muTemplateHash = 0x4339BE7A302ECC05;
    static const int miNumMembers = 5;

    cGcRealityCommonFactions mFaction;
    cGcAISpaceshipRoles mShipRole;
    cGcSpaceshipClasses mShipClass;
    cGcFrigateClass mFrigateClass;
    cTkSeed mSeed;

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
