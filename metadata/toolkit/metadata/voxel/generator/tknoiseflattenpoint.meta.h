#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/toolkit/metadata/voxel/generator/tknoiseflattenoptions.meta.h"

class cTkNoiseFlattenPoint
{
public:
    static const unsigned __int64 muNameHash = 0xCE87D0159308C03A;
    static const unsigned __int64 muTemplateHash = 0xCD402697FFDFC91B;
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
    static void ClassPointerFix(cTkClassPointer* lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
