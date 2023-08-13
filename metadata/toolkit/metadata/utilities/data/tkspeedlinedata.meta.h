#pragma once
#include "pch.h"

enum eLinesPosition
{
    ELinesPosition_Absolute = 0,
    ELinesPosition_Relative = 1,
};

class cTkSpeedLineData
{
public:
    static const unsigned __int64 muNameHash = 0xEC9FF9AD5EDADEFF;
    static const unsigned __int64 muTemplateHash = 0xE445E4110EBDBDAC;
    static const int miNumMembers = 15;

    cTkFixedString<128,char> macMaterial;
    int miNumberOfParticles;
    float mfRadius;
    float mfLength;
    float mfRemoveCylinderRadius;
    float mfWidth;
    float mfAlpha;
    float mfFadeTime;
    float mfMinVisibleSpeed;
    float mfMaxVisibleSpeed;
    float mfLifetime;
    float mfSpeed;
    cTkColour mColourOrigin;
    cTkColour mColourEnd;
    eLinesPosition meLinesPosition;

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
