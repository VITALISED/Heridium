#pragma once
#include "../../../../../../../../../pch.h"

class cGcCreatureVocalSoundData;
class cGcCreatureVocalSoundData;
class cGcCreatureVocalSoundData;
class cGcCreatureVocalSoundData;

class cGcCreatureVocalData
{
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
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
