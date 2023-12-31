#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/reality/tables/gcwordcategorytableenum.meta.h"

enum eWordInteractEffect
{
    EWordInteractEffect_Pain = 0,
    EWordInteractEffect_Heal = 1,
};
#include "../../../../metadata/source/metadata/reality/gcalienrace.meta.h"

class cGcAlienSpeechEntry
{
public:
    static const unsigned __int64 muNameHash = 0xB81D78F21EBE37;
    static const unsigned __int64 muTemplateHash = 0xC9729B0D1412C4AB;
    static const int miNumMembers = 8;

    TkID<128> mId;
    TkID<256> mText;
    TkID<256> mGroup;
    cgcwordcategorytableEnum mCategory;
    int miFrequency;
    eWordInteractEffect meWordInteractEffect;
    cGcAlienRace mRace;
    int miLevel;

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
