#pragma once
#include "../../../../../../pch.h"

enum eQuality
{
    EQuality_Normal = 0,
    EQuality_Rare = 1,
    EQuality_Epic = 2,
    EQuality_Legendary = 3,
    EQuality_Illegal = 4,
    EQuality_Sentinel = 5,
};
class cGcProceduralTechnologyCategory;
class cGcWeightingCurve;

class cGcProceduralTechnologyData
{
    static const unsigned __int64 muNameHash = 0x6B8472FADE3C492C;
    static const unsigned __int64 muTemplateHash = 0x771B3CF67E3FD8A8;
    static const int miNumMembers = 15;

    TkID<128> mID;
    TkID<128> mTemplate;
    TkID<256> mGroup;
    cTkFixedString<128,char> macName;
    cTkFixedString<128,char> macNameLower;
    cTkFixedString<128,char> macSubtitle;
    cTkFixedString<128,char> macDescription;
    cTkColour mColour;
    eQuality meQuality;
    cGcProceduralTechnologyCategory mCategory;
    int miNumStatsMin;
    int miNumStatsMax;
    cGcWeightingCurve mWeightingCurve;
    cTkColour mUpgradeColour;
    cTkDynamicArray<cGcProceduralTechnologyStatLevel> maStatLevels;

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
