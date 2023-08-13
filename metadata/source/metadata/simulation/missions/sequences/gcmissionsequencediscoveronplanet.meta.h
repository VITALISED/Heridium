#pragma once
#include "../../../../../../../../pch.h"

enum eDiscoverTargetOnThisPlanet
{
    EDiscoverTargetOnThisPlanet_Animal = 0,
    EDiscoverTargetOnThisPlanet_Vegetable = 1,
    EDiscoverTargetOnThisPlanet_Mineral = 2,
};

class cGcMissionSequenceDiscoverOnPlanet
{
    static const unsigned __int64 muNameHash = 0x368D06565D9CC1;
    static const unsigned __int64 muTemplateHash = 0xC36EF22C8FB1973C;
    static const int miNumMembers = 4;

    float mfPercentToDiscover;
    cTkFixedString<128,char> macMessage;
    eDiscoverTargetOnThisPlanet meDiscoverTargetOnThisPlanet;
    cTkFixedString<128,char> macDebugText;

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
