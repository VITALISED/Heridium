#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/reality/gcinventoryclass.meta.h"

class cGcRewardUpgradeShipClass
{
public:
    static const unsigned __int64 muNameHash = 0x710A6CDD7B84F22B;
    static const unsigned __int64 muTemplateHash = 0x69A3044E2448E335;
    static const int miNumMembers = 3;

    bool mbSilent;
    cGcInventoryClass mForceToSpecificClass;
    bool mbMatchClassToCommunityTier;

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
