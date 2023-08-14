#pragma once
#include "../../../../../../../pch.h"

#include "../../../../../../../metadata/source/metadata/simulation/ecosystem/creatures/data/gccreaturevocalsounddata.meta.h"

class cGcCreatureVocalData
{
public:
    static const unsigned __int64 muNameHash = 0x505F7128834EAACA;
    static const unsigned __int64 muTemplateHash = 0xED0EA1EB716B1C8F;
    static const int miNumMembers = 5;

    float mfScaleBias;
    cGcCreatureVocalSoundData mIdleVocal;
    cGcCreatureVocalSoundData mFleeVocal;
    cGcCreatureVocalSoundData mDeathVocal;
    cGcCreatureVocalSoundData mAttackVocal;

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
