#pragma once
#include "../../../../../../pch.h"

enum eDesiredTechProbability
{
    EDesiredTechProbability_Never = 0,
    EDesiredTechProbability_Rare = 1,
    EDesiredTechProbability_Common = 2,
    EDesiredTechProbability_Always = 3,
};

class cGcInventoryTechProbability
{
public:
    static const unsigned __int64 muNameHash = 0x71B8CFD20DB7A5E5;
    static const unsigned __int64 muTemplateHash = 0x112E6E11E83935D1;
    static const int miNumMembers = 2;

    TkID<128> mTech;
    eDesiredTechProbability meDesiredTechProbability;

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
