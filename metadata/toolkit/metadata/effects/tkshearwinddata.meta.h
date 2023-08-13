#pragma once
#include "pch.h"

class cTkShearWindOctaveData;
class cTkShearWindOctaveData;
class cTkShearWindOctaveData;
class cTkShearWindOctaveData;

class cTkShearWindData
{
public:
    static const unsigned __int64 muNameHash = 0xB9B8ADD8C9FFC2D8;
    static const unsigned __int64 muTemplateHash = 0xC462D4F8119851CF;
    static const int miNumMembers = 13;

    TkID<128> mName;
    float mfOverallWindStrength;
    float mfLdsWindStrength;
    float mfLdsWindSpeed;
    float mfShearWindSpeed;
    float mfWindShearVertpushStrength;
    float mfWindShearGradientStrength;
    float mfWindShearToDotLdsFactor;
    float mfWindStrengthToVertpush;
    cTkShearWindOctaveData mOctave0;
    cTkShearWindOctaveData mOctave1;
    cTkShearWindOctaveData mOctave2;
    cTkShearWindOctaveData mOctave3;

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
