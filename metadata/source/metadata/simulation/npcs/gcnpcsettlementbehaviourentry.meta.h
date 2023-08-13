#pragma once
#include "../../../../../../../pch.h"

class cGcNPCSettlementBehaviourEntry
{
    static const unsigned __int64 muNameHash = 0xB268E74AC135A1A5;
    static const unsigned __int64 muTemplateHash = 0xDC67D89D62DABC7C;
    static const int miNumMembers = 6;

    float mfRunWhenOutdoorsProbability;
    bool mbOnlyUseIndoorPOIs;
    cTkDynamicArray<cGcNPCSettlementBehaviourBuildingClassCapacityEntry> maBuildingClassCapacities;
    cTkDynamicArray<cGcNPCSettlementBehaviourAreaPropertyWeightEntry> maAreaPropertyWeights;
    cTkDynamicArray<cGcNPCSettlementBehaviourBuildingClassWeightEntry> maBuildingClassWeights;
    cTkDynamicArray<cGcNPCSettlementBehaviourObjectTypeWeightEntry> maObjectTypeWeights;

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
