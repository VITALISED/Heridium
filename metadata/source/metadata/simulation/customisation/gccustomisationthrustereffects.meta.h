#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/source/metadata/simulation/customisation/gccustomisationthrustereffect.meta.h"
#include "../../../../../metadata/source/metadata/simulation/customisation/gccustomisationbackpackdata.meta.h"
#include "../../../../../metadata/source/metadata/simulation/customisation/gccustomisationshiptrails.meta.h"
#include "../../../../../metadata/source/metadata/simulation/customisation/gccustomisationfreighterengineeffect.meta.h"

class cGcCustomisationThrusterEffects
{
public:
    static const unsigned __int64 muNameHash = 0xFD3FA61F96564C04;
    static const unsigned __int64 muTemplateHash = 0xB4ACBB424E77732B;
    static const int miNumMembers = 4;

    cTkDynamicArray<cGcCustomisationThrusterEffect> maJetpackEffects;
    cTkDynamicArray<cGcCustomisationBackpackData> maBackpackData;
    cTkDynamicArray<cGcCustomisationShipTrails> maShipEffects;
    cTkDynamicArray<cGcCustomisationFreighterEngineEffect> maFreighterEngineEffects;

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
