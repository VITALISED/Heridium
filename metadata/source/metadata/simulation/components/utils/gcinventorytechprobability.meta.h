#pragma once

#include "../../../../../../../../pch.h"
enum eDesiredTechProbability
{
    EDesiredTechProbability_Never = 0,
    EDesiredTechProbability_Rare = 1,
    EDesiredTechProbability_Common = 2,
    EDesiredTechProbability_Always = 3,
};

class cGcInventoryTechProbability
{
    static const unsigned __int64 muNameHash = 8194528023080838629;
    static const unsigned __int64 muTemplateHash = 1238047970763027921;
    static const int miNumMembers = 2;

    TkID<128> mTech;
    eDesiredTechProbability meDesiredTechProbability;

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
