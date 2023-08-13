#pragma once
#include "pch.h"

class cTkPaletteTexture;

enum eTextureGameplayUse
{
    ETextureGameplayUse_IgnoreName = 0,
    ETextureGameplayUse_MatchName = 1,
    ETextureGameplayUse_DoNotMatchName = 2,
};

class cTkProceduralTexture
{
public:
    static const unsigned __int64 muNameHash = 0x75816D38B6B42FE4;
    static const unsigned __int64 muTemplateHash = 0xA9AA4969DCF153B8;
    static const int miNumMembers = 9;

    TkID<256> mName;
    cTkPaletteTexture mPalette;
    float mfProbability;
    eTextureGameplayUse meTextureGameplayUse;
    bool mbOverrideAverageColour;
    cTkColour mAverageColour;
    cTkFixedString<128,char> macDiffuse;
    cTkFixedString<128,char> macNormal;
    cTkFixedString<128,char> macMask;

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
