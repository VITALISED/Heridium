#pragma once
#include "pch.h"

class cGcInteractionActivationCost
{
public:
    static const unsigned __int64 muNameHash = 0xDF5512FA05691ED2;
    static const unsigned __int64 muTemplateHash = 0xF786CC820054DF74;
    static const int miNumMembers = 6;

    TkID<128> mSubstanceId;
    cTkDynamicArray<TkID<128>1> maAltIds;
    int miCost;
    bool mbRepeat;
    TkID<128> mRequiredTech;
    cTkDynamicArray<int1> maOnlyChargeDuringSeasons;

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
