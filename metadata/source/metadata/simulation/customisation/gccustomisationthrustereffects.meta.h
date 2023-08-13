#pragma once

#include "../../../../../../../pch.h"
class cGcCustomisationThrusterEffects
{
    static const unsigned __int64 muNameHash = 18248486869724974084;
    static const unsigned __int64 muTemplateHash = 13018986516279948075;
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
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
