#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/reality/gcalienrace.meta.h"

enum eRequirement
{
    ERequirement_CanLearn = 0,
    ERequirement_CanSpeak = 1,
};

class cGcCostWordKnowledge
{
public:
    static const unsigned __int64 muNameHash = 0x67494CEE3CE0F9F6;
    static const unsigned __int64 muTemplateHash = 0xC4F9F786BC08F74;
    static const int miNumMembers = 2;

    cGcAlienRace mRace;
    eRequirement meRequirement;

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
