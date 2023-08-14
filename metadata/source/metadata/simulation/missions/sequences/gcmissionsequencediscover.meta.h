#pragma once
#include "../../../../../../pch.h"

enum eDiscoverTarget
{
    EDiscoverTarget_Animal = 0,
    EDiscoverTarget_Vegetable = 1,
    EDiscoverTarget_Mineral = 2,
};

class cGcMissionSequenceDiscover
{
public:
    static const unsigned __int64 muNameHash = 0x61016ED971A59B9A;
    static const unsigned __int64 muTemplateHash = 0xEE9CFABE1CF4D7A;
    static const int miNumMembers = 7;

    cTkFixedString<128,char> macMessage;
    bool mbPerPlanet;
    eDiscoverTarget meDiscoverTarget;
    int miAmountMin;
    int miAmountMax;
    bool mbTakeAmountFromSeasonalData;
    cTkFixedString<128,char> macDebugText;

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
