#pragma once
#include "../../../../../../pch.h"

enum eAge
{
    EAge_Regular = 0,
    EAge_Weird = 1,
};
#include "../../../../../../metadata/source/metadata/reality/gcrarity.meta.h"

class cGcCreatureInfo
{
public:
    static const unsigned __int64 muNameHash = 0xE85F02E30BDAB35D;
    static const unsigned __int64 muTemplateHash = 0x9B6B93F108A31AE;
    static const int miNumMembers = 19;

    eAge meAge;
    cTkFixedString<128,char> macGender1;
    cTkFixedString<128,char> macGender2;
    cTkFixedString<128,char> macTemperament;
    cTkFixedString<128,char> macDiet;
    cTkFixedString<128,char> macWeight1;
    cTkFixedString<128,char> macHeight1;
    cTkFixedString<128,char> macWeight2;
    cTkFixedString<128,char> macHeight2;
    float mfWeight1;
    float mfHeight1;
    float mfWeight2;
    float mfHeight2;
    cTkFixedString<128,char> macNotes;
    cGcRarity mRarity;
    TkID<256> mBiomeDesc;
    TkID<256> mTempermentDesc;
    TkID<256> mDietDesc;
    TkID<256> mNotesDesc;

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
