#pragma once
#include "pch.h"

class cGcFogProperties;
class cGcWeatherColourModifiers;

class cGcStormProperties
{
public:
    static const unsigned __int64 muNameHash = 0x82B1B19A1A57F975;
    static const unsigned __int64 muTemplateHash = 0xA85160500E3060F0;
    static const int miNumMembers = 4;

    float mfWeighting;
    cGcFogProperties mFog;
    cGcWeatherColourModifiers mColourModifiers;
    cTkFixedArray<cTkVector2, 5> maHazardModifiers;

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
