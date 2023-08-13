#pragma once
#include "../../../../../../pch.h"

enum eDepthOfFieldSetting
{
    EDepthOfFieldSetting_Off = 0,
    EDepthOfFieldSetting_Mid = 1,
    EDepthOfFieldSetting_On = 2,
    EDepthOfFieldSetting_Macro = 3,
};

class cGcPhotoModeSettings
{
    static const unsigned __int64 muNameHash = 0xE5075EC0403F94CA;
    static const unsigned __int64 muTemplateHash = 0xA6116160B4E36AE2;
    static const int miNumMembers = 14;

    float mfFog;
    float mfCloudAmount;
    cTkVector4 mSunDir;
    float mfFoV;
    eDepthOfFieldSetting meDepthOfFieldSetting;
    float mfDepthOfFieldDistance;
    float mfDepthOfFieldDistanceSpace;
    float mfHalfFocalPlaneDepth;
    float mfHalfFocalPlaneDepthSpace;
    float mfDepthOfFieldPhysConvergence;
    float mfDepthOfFieldPhysAperture;
    float mfVignette;
    int miFilter;
    float mfBloom;

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
