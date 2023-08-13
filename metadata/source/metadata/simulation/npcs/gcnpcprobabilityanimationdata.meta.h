#pragma once

#include "../../../../../../../pch.h"
enum eAnimationIntensity
{
    EAnimationIntensity_Low = 0,
    EAnimationIntensity_Medium = 1,
    EAnimationIntensity_High = 2,
    EAnimationIntensity_None = 3,
};

class cGcNPCProbabilityAnimationData
{
    static const unsigned __int64 muNameHash = 7984070779839422868;
    static const unsigned __int64 muTemplateHash = 17453834313374331720;
    static const int miNumMembers = 5;

    TkID<128> mName;
    float mfProbability;
    eAnimationIntensity meAnimationIntensity;
    cTkDynamicArray<cGcAlienRace> maExcludeRace;
    cTkDynamicArray<TkID<128> > maTags;

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
