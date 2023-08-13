#pragma once
#include "pch.h"

enum eScanEffectType
{
    EScanEffectType_Building = 0,
    EScanEffectType_TargetShip = 1,
    EScanEffectType_Creature = 2,
    EScanEffectType_Ground = 3,
    EScanEffectType_Objects = 4,
};

class cGcScanEffectData
{
public:
    static const unsigned __int64 muNameHash = 0xCB9E3018E759F166;
    static const unsigned __int64 muTemplateHash = 0x1D30CF3BCBA8A73D;
    static const int miNumMembers = 14;

    TkID<128> mId;
    eScanEffectType meScanEffectType;
    cTkColour mColour;
    float mfBasecolourIntensity;
    float mfScanlinesSeparation;
    float mfFresnelIntensity;
    float mfGlowIntensity;
    float mfWaveOffset;
    bool mbWaveActive;
    bool mbFixedUpAxis;
    bool mbTransparent;
    bool mbModelFade;
    float mfFadeInTime;
    float mfFadeOutTime;

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
