#pragma once
#include "../../../../../../../pch.h"

enum eSwatchPrimaryColour
{
    ESwatchPrimaryColour_Primary = 0,
    ESwatchPrimaryColour_Secondary = 1,
    ESwatchPrimaryColour_Ternary = 2,
    ESwatchPrimaryColour_Quaternary = 3,
};

enum eSwatchSecondaryColour
{
    ESwatchSecondaryColour_Primary = 0,
    ESwatchSecondaryColour_Secondary = 1,
    ESwatchSecondaryColour_Ternary = 2,
    ESwatchSecondaryColour_Quaternary = 3,
};

class cGcBaseBuildingPalette
{
    static const unsigned __int64 muNameHash = 0xB499CC97C0515963;
    static const unsigned __int64 muTemplateHash = 0xCC9B662A4D061ACE;
    static const int miNumMembers = 8;

    cTkColour mPrimaryColour;
    cTkColour mSecondaryColour;
    cTkColour mTernaryColour;
    cTkColour mQuaternaryColour;
    TkID<256> mName;
    TkID<256> mId;
    eSwatchPrimaryColour meSwatchPrimaryColour;
    eSwatchSecondaryColour meSwatchSecondaryColour;

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
