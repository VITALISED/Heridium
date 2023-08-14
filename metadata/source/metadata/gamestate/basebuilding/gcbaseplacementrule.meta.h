#pragma once
#include "../../../../../pch.h"

enum eTwinCriteria
{
    ETwinCriteria_None = 0,
    ETwinCriteria_MoveToTwin = 1,
    ETwinCriteria_StretchToTwin = 2,
    ETwinCriteria_StretchToRaycast = 3,
    ETwinCriteria_MoveToTwinRelative = 4,
};

class cGcBasePlacementRule
{
public:
    static const unsigned __int64 muNameHash = 0xE9F8FE2C0612C3FE;
    static const unsigned __int64 muTemplateHash = 0x86553802E4988FA;
    static const int miNumMembers = 5;

    cTkDynamicArray<cTkClassPointer> maConditions;
    cTkFixedString<128,char> macPositionLocator;
    TkID<256> mPartID;
    bool mbORConditions;
    eTwinCriteria meTwinCriteria;

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
