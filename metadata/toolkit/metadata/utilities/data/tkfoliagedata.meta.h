#pragma once
#include "../../../../../../../pch.h"

class cTkFoliageData
{
    static const unsigned __int64 muNameHash = 0x678F6A0ACE397B4;
    static const unsigned __int64 muTemplateHash = 0xCF5018310EDBC8A2;
    static const int miNumMembers = 7;

    cTkFixedString<128,char> macMaterial;
    float mfScale;
    float mfDensity;
    float mfDensityVariance;
    float mfAngleMultiplier;
    bool mbAngleExponentially;
    cTkColour mColour;

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
