#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/reality/gctechnologycategory.meta.h"

class cGcRewardDamageTech
{
public:
    static const unsigned __int64 muNameHash = 0x7DA0241C104EEDF;
    static const unsigned __int64 muTemplateHash = 0xC1EDE759697D3725;
    static const int miNumMembers = 3;

    cGcTechnologyCategory mCategory;
    TkID<128> mTechToDamage_optional;
    bool mbShowDamageMessage;

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
