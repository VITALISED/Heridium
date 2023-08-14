#pragma once
#include "../../../../pch.h"

class cGcPlayerExperienceAsteroidCreatureSpawnData
{
public:
    static const unsigned __int64 muNameHash = 0xEC6598B33FE9523A;
    static const unsigned __int64 muTemplateHash = 0xF0C0B856107BC556;
    static const int miNumMembers = 5;

    TkID<128> mID;
    float mfWeight;
    cTkVector2 mSmallMinMax;
    cTkVector2 mMediumMinMax;
    cTkVector2 mLargeMinMax;

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
