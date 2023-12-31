#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/source/metadata/simulation/customisation/gccustomisationthrusterjet.meta.h"

class cGcCustomisationThrusterEffect
{
public:
    static const unsigned __int64 muNameHash = 0xE7EC6E83CB496A6C;
    static const unsigned __int64 muTemplateHash = 0x35D1B26990D36E34;
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
    static void ClassPointerFix(cTkClassPointer* lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
