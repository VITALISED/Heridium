#pragma once
#include "../../../../../pch.h"

enum eFactionOption
{
    EFactionOption_DataDefined = 0,
    EFactionOption_CurrentMission = 1,
    EFactionOption_CurrentSystem = 2,
};
#include "../../../../../metadata/source/metadata/simulation/missions/types/gcmissionfaction.meta.h"

class cGcFactionSelectOptions
{
public:
    static const unsigned __int64 muNameHash = 0x49D48E5A22491956;
    static const unsigned __int64 muTemplateHash = 0x9618EF930539519F;
    static const int miNumMembers = 2;

    eFactionOption meFactionOption;
    cGcMissionFaction mFaction;

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
