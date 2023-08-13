#pragma once
#include "../../../../../../../pch.h"

class cTkMaterialResource;

class cGcCamouflageData
{
    static const unsigned __int64 muNameHash = 0x4548C9A8732E084E;
    static const unsigned __int64 muTemplateHash = 0x89FA7100747D117F;
    static const int miNumMembers = 7;

    cTkMaterialResource mCamouflageMaterial;
    float mfDissolveTime;
    float mfDissolveTimeVR;
    float mfFadeOutTime;
    float mfFadeInTime;
    float mfLowQualityFresnelModifier;
    float mfLowQualityBrightnessMultiplier;

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
