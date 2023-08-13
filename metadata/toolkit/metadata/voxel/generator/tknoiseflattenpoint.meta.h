#pragma once

#include "../../../../../../../pch.h"
class cTkNoiseFlattenOptions;

class cTkNoiseFlattenPoint
{
    static const unsigned __int64 muNameHash = 14882092284748808250;
    static const unsigned __int64 muTemplateHash = 14789863610559482139;
    static const int miNumMembers = 11;

    float mfDensity;
    float mfFlattenRadius;
    float mfTurbulenceFrequency;
    float mfTurbulenceAmplitude;
    int miTurbulenceOctaves;
    cTkNoiseFlattenOptions mFlattenType;
    int miClassification;
    int miPlacement;
    bool mbAddWaypoint;
    bool mbAddShelter;
    bool mbAddLandingPad;

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
