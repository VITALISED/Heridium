#pragma once
#include "pch.h"

enum eAnimationIntensity
{
    EAnimationIntensity_Low = 0,
    EAnimationIntensity_Medium = 1,
    EAnimationIntensity_High = 2,
    EAnimationIntensity_None = 3,
};

class cGcNPCProbabilityAnimationData
{
public:
    static const unsigned __int64 muNameHash = 0x6ECD1E12A5E7A194;
    static const unsigned __int64 muTemplateHash = 0xF23879D569337348;
    static const int miNumMembers = 5;

    TkID<128> mName;
    float mfProbability;
    eAnimationIntensity meAnimationIntensity;
    cTkDynamicArray<cGcAlienRace1> maExcludeRace;
    cTkDynamicArray<TkID<128>1> maTags;

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
