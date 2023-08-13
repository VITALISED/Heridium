#pragma once

#include "../../../../../../../pch.h"
class cGcPetEggSpeciesOverrideData
{
    static const unsigned __int64 muNameHash = 7396907758099701802;
    static const unsigned __int64 muTemplateHash = 7747796579320335981;
    static const int miNumMembers = 7;

    TkID<128> mCreatureID;
    bool mbCanChangeGrowth;
    bool mbCanChangeAccessories;
    bool mbCanChangeColour;
    bool mbCanChangeTraits;
    float mfMinScaleOverride;
    float mfMaxScaleOverride;

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
