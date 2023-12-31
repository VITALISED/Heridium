#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/gameplay/gccombateffecttype.meta.h"

class cGcImpactCombatEffectData
{
public:
    static const unsigned __int64 muNameHash = 0x3213D59A0301372C;
    static const unsigned __int64 muTemplateHash = 0xB66CB6E7E0D4B11A;
    static const int miNumMembers = 4;

    cGcCombatEffectType mCombatEffectType;
    float mfTotalDuration;
    float mfDamagePerSeccond;
    float mfCurrentDuration;

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
