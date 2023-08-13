#pragma once
#include "../../../../../../pch.h"

class cGcRewardProcTechProduct
{
    static const unsigned __int64 muNameHash = 0x6D88488E4483F056;
    static const unsigned __int64 muTemplateHash = 0xF59F20CCE22DC03C;
    static const int miNumMembers = 7;

    TkID<256> mGroup;
    int miWeightedChanceNormal;
    int miWeightedChanceRare;
    int miWeightedChanceEpic;
    int miWeightedChanceLegendary;
    bool mbForceRelevant;
    bool mbForceQualityRelevant;

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
