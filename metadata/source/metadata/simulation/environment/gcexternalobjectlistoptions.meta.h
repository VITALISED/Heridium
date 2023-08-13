#pragma once
#include "pch.h"

class cGcTerrainTileType;

class cGcExternalObjectListOptions
{
public:
    static const unsigned __int64 muNameHash = 0x51E8334202D1B952;
    static const unsigned __int64 muTemplateHash = 0xB27A8358427627CA;
    static const int miNumMembers = 9;

    TkID<128> mName;
    TkID<128> mResourceHint;
    TkID<128> mResourceHintIcon;
    float mfProbability;
    float mfSeasonalProbabilityOverride;
    cGcTerrainTileType mTileType;
    bool mbAllowLimiting;
    bool mbChooseUsingLifeLevel;
    cTkDynamicArray<cTkFixedString<128,char>1> maOptions;

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
