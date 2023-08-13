#pragma once

#include "../../../../../../../pch.h"
class cGcBasePartSearchFilter;

class cGcBaseSearchFilter
{
    static const unsigned __int64 muNameHash = 6008755604338002111;
    static const unsigned __int64 muTemplateHash = 12960303455158756244;
    static const int miNumMembers = 11;

    bool mbOnCurrentPlanet;
    bool mbInCurrentSystem;
    bool mbIsOverlapping;
    bool mbIsBuildable;
    unsigned __int64 mui64OnSpecificPlanet;
    unsigned __int64 mui64InSpecificSystem;
    TkID<256> mOnSpecificPlanetScanEvent;
    cTkDynamicArray<cGcPersistentBaseTypes> maMatchingTypes;
    cGcBasePartSearchFilter mBasePartFilter;
    int miContainsMinParts;
    int miContainsMaxParts;

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
