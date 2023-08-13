#pragma once

#include "../../../../../../../pch.h"
class cGcCustomisationThrusterEffect
{
    static const unsigned __int64 muNameHash = 16711853829595425388;
    static const unsigned __int64 muTemplateHash = 3878076920613793332;
    static const int miNumMembers = 6;

    TkID<128> mName;
    TkID<128> mLinkedSpecialID;
    TkID<256> mTip;
    bool mbAllowedInSeasonalDefaults;
    cTkColour mLightColour;
    cTkDynamicArray<cGcCustomisationThrusterJet> maJets;

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
