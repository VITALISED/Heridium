#pragma once
#include "../../../../../../../pch.h"

class cGcSpaceSkyColours
{
    static const unsigned __int64 muNameHash = 0x488F8DF6F4A99ACA;
    static const unsigned __int64 muTemplateHash = 0xCBB68BF4033F6629;
    static const int miNumMembers = 14;

    cTkColour mCloudColour;
    cTkColour mColourTop;
    cTkColour mColourMid;
    cTkColour mColourBottom;
    cTkColour mColourTopPlanet;
    cTkColour mColourMidPlanet;
    cTkColour mColourBottomPlanet;
    cTkColour mSunColour;
    cTkColour mNebulaColour1;
    cTkColour mNebulaColour2;
    cTkColour mNebulaColour3;
    cTkColour mNebulaShadowColour;
    cTkColour mFogColour;
    cTkColour mFogColour2;

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
