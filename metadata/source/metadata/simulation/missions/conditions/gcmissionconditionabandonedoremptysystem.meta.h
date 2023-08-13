#pragma once
#include "pch.h"

enum eMissionSystemType
{
    EMissionSystemType_Either = 0,
    EMissionSystemType_Empty = 1,
    EMissionSystemType_Abandoned = 2,
};

class cGcMissionConditionAbandonedOrEmptySystem
{
public:
    static const unsigned __int64 muNameHash = 0x651218B208D538A0;
    static const unsigned __int64 muTemplateHash = 0x1EB28DC3AE2177C7;
    static const int miNumMembers = 1;

    eMissionSystemType meMissionSystemType;

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
