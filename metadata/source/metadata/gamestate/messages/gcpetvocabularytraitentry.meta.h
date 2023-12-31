#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/source/metadata/simulation/ecosystem/creatures/data/gccreaturepettraits.meta.h"

class cGcPetVocabularyTraitEntry
{
public:
    static const unsigned __int64 muNameHash = 0xD1AA1B644B5DE736;
    static const unsigned __int64 muTemplateHash = 0xA055504BF90A3AA6;
    static const int miNumMembers = 3;

    cGcCreaturePetTraits mTrait;
    TkID<256> mPositive;
    TkID<256> mNegative;

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
