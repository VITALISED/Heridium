#pragma once
#include "../../../../pch.h"

enum eDynamicResScalingAggressiveness
{
    EDynamicResScalingAggressiveness_Moderate = 0,
    EDynamicResScalingAggressiveness_Balanced = 1,
    EDynamicResScalingAggressiveness_Aggressive = 2,
};

class cTkDynamicResScalingSettings
{
public:
    static const unsigned __int64 muNameHash = 0x4ECB5D79E2F5CD94;
    static const unsigned __int64 muTemplateHash = 0xBD988A745376C6E4;
    static const int miNumMembers = 2;

    float mfLowestDynamicResScalingFactor;
    eDynamicResScalingAggressiveness meDynamicResScalingAggressiveness;

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
