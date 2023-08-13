#pragma once

#include "../../../../../../../../pch.h"
class cGcBaseBuildingPartStyle;

class cGcSettlementColourPalette
{
    static const unsigned __int64 muNameHash = 5571274856605297599;
    static const unsigned __int64 muTemplateHash = 10435740349503752435;
    static const int miNumMembers = 5;

    TkID<128> mName;
    float mfRelativeProbability;
    cGcBaseBuildingPartStyle mLimitToStyle;
    cTkDynamicArray<cGcWeightedColourId> maDefaultPalettes;
    cTkDynamicArray<cGcBuildingColourPalette> maBuildingPalettes;

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
