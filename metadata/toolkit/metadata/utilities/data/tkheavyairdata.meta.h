#pragma once
#include "../../../../../../../pch.h"

enum eEmitterShape
{
    EEmitterShape_Sphere = 0,
    EEmitterShape_UpperHalfSphere = 1,
    EEmitterShape_BottomHalfSphere = 2,
};

class cTkHeavyAirData
{
    static const unsigned __int64 muNameHash = 0xCB25F378CA730AFC;
    static const unsigned __int64 muTemplateHash = 0x5ED48C0489FB7DD4;
    static const int miNumMembers = 22;

    cTkFixedString<128,char> macMaterial;
    int miNumberOfParticles;
    float mfRadius;
    float mfRadiusY;
    float mfMinParticleLifetime;
    float mfMaxParticleLifetime;
    float mfFadeTime;
    float mfSpeedFadeInTime;
    float mfMinVisibleSpeed;
    float mfSpeedFadeOutTime;
    float mfMaxVisibleSpeed;
    float mfSoftFadeStrength;
    float mfSpawnRotationRange;
    cTkVector mMajorDirection;
    cTkVector mScaleRange;
    cTkVector mRotationSpeedRange;
    cTkVector mTwinkleRange;
    cTkVector mAmplitudeMin;
    cTkVector mAmplitudeMax;
    cTkColour mColour1;
    cTkColour mColour2;
    eEmitterShape meEmitterShape;

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
