#pragma once
#include "../../../../pch.h"

enum eFrigateTraitStrength
{
    EFrigateTraitStrength_NegativeLarge = 0,
    EFrigateTraitStrength_NegativeMedium = 1,
    EFrigateTraitStrength_NegativeSmall = 2,
    EFrigateTraitStrength_TertiarySmall = 3,
    EFrigateTraitStrength_TertiaryMedium = 4,
    EFrigateTraitStrength_TertiaryLarge = 5,
    EFrigateTraitStrength_SecondarySmall = 6,
    EFrigateTraitStrength_SecondaryMedium = 7,
    EFrigateTraitStrength_SecondaryLarge = 8,
    EFrigateTraitStrength_Primary = 9,
};

class cGcFrigateTraitStrength
{
public:
    static const unsigned __int64 muNameHash = 0x6B6B42D850BF9519;
    static const unsigned __int64 muTemplateHash = 0xB0B0A7490B06DF04;
    static const int miNumMembers = 1;

    eFrigateTraitStrength meFrigateTraitStrength;

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
