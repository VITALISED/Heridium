#pragma once
#include "../../../../../pch.h"

enum eSurvivalBar
{
    ESurvivalBar_Health = 0,
    ESurvivalBar_Hazard = 1,
    ESurvivalBar_Energy = 2,
};

class cGcPlayerSurvivalBarType
{
public:
    static const unsigned __int64 muNameHash = 0xBF11E8FC1185AE00;
    static const unsigned __int64 muTemplateHash = 0x6B865C4DF7135393;
    static const int miNumMembers = 1;

    eSurvivalBar meSurvivalBar;

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
