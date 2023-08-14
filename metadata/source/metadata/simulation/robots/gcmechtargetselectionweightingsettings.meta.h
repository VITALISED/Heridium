#pragma once
#include "../../../../../pch.h"

class cGcMechTargetSelectionWeightingSettings
{
public:
    static const unsigned __int64 muNameHash = 0x5CE6C6E85ABBB6DB;
    static const unsigned __int64 muTemplateHash = 0x88B34845F702A880;
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
    static void ClassPointerFix(cTkClassPointer* lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
