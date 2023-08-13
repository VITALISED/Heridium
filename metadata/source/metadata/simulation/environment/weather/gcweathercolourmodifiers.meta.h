#pragma once
#include "../../../../../../../../pch.h"

class cGcColourModifier;
class cGcColourModifier;
class cGcColourModifier;
class cGcColourModifier;
class cGcColourModifier;
class cGcColourModifier;
class cGcColourModifier;
class cGcColourModifier;
class cGcColourModifier;

class cGcWeatherColourModifiers
{
    static const unsigned __int64 muNameHash = 0x63BA6E198CA6237E;
    static const unsigned __int64 muTemplateHash = 0xD425864C90EB0317;
    static const int miNumMembers = 10;

    cGcColourModifier mSkyColour;
    cGcColourModifier mSkyUpperColour;
    cGcColourModifier mHorizonColour;
    cGcColourModifier mSunColour;
    cGcColourModifier mFogColour;
    cGcColourModifier mHeightFogColour;
    cGcColourModifier mLightColour;
    cGcColourModifier mCloudColour1;
    cGcColourModifier mCloudColour2;
    cTkFixedArray<cGcColourModifier> maHeavyAirColour;

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
