#pragma once

#include "../../../../../../../pch.h"
class cGcMechTargetSelectionWeightingSettings
{
    static const unsigned __int64 muNameHash = 6694256597389784795;
    static const unsigned __int64 muTemplateHash = 9850296275323496576;
    static const int miNumMembers = 12;

    float mfThreatWeightFactorBase;
    float mfFwdDirectionWeightFactorBase;
    float mfDistanceWeightFactorBase;
    float mfVeryCloseDistance;
    float mfVeryCloseDistanceWeightFactorExponent;
    float mfCloseDistance;
    float mfCloseDistanceWeightFactorExponent;
    float mfMidDistance;
    float mfMidDistanceWeightFactorExponent;
    float mfFarDistance;
    float mfFarDistanceWeightFactorExponent;
    float mfVeryFarDistanceWeightFactorExponent;

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
