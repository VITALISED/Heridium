#pragma once
#include "../../../../../../../pch.h"

class cGcShipAIAttackDataTable
{
    static const unsigned __int64 muNameHash = 0xC501980088063B;
    static const unsigned __int64 muTemplateHash = 0x6FB2E2B112C03148;
    static const int miNumMembers = 5;

    cTkDynamicArray<cGcShipAICombatDefinition> maDefinitions;
    cTkDynamicArray<cGcShipAIAttackData> maBehaviourTable;
    cTkDynamicArray<cGcSpaceshipTravelData> maEngineTable;
    cTkDynamicArray<cGcSpaceshipShieldData> maShieldTable;
    cTkFixedArray<TkID<128> > maTraderAttackLookup;

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
