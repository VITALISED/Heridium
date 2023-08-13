#pragma once
#include "pch.h"

enum eBuildPartSearchType
{
    EBuildPartSearchType_Base = 0,
    EBuildPartSearchType_Freighter = 1,
    EBuildPartSearchType_AllPlayerOwned = 2,
    EBuildPartSearchType_OtherPlayerBase = 3,
};

class cGcBuildingPartSearchType
{
public:
    static const unsigned __int64 muNameHash = 0xAEBE0762190D9B2;
    static const unsigned __int64 muTemplateHash = 0xED77BBD7595FB24A;
    static const int miNumMembers = 4;

    eBuildPartSearchType meBuildPartSearchType;
    cTkDynamicArray<cGcPersistentBaseTypes1> maBaseSearchFilters;
    bool mbIncludeOnlyOverlappingBases;
    bool mbIncludeGlobalBaseObjects;

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
