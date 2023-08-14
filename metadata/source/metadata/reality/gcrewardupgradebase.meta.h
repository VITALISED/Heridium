#pragma once
#include "../../../../pch.h"

enum eUpgradeBaseType
{
    EUpgradeBaseType_AllMatching = 0,
    EUpgradeBaseType_NearestMatching = 1,
};
#include "../../../../metadata/source/metadata/gamestate/basebuilding/gcpersistentbasetypes.meta.h"

class cGcRewardUpgradeBase
{
public:
    static const unsigned __int64 muNameHash = 0xE60E16C73CCFBAC0;
    static const unsigned __int64 muTemplateHash = 0xFFE472115B564B2D;
    static const int miNumMembers = 2;

    eUpgradeBaseType meUpgradeBaseType;
    cTkDynamicArray<cGcPersistentBaseTypes> maMatchingBaseTypes;

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
