#pragma once

#include "../../../../../../pch.h"
enum eDynamicResScalingAggressiveness
{
    EDynamicResScalingAggressiveness_Moderate = 0,
    EDynamicResScalingAggressiveness_Balanced = 1,
    EDynamicResScalingAggressiveness_Aggressive = 2,
};

class cTkDynamicResScalingSettings
{
    static const unsigned __int64 muNameHash = 5677734533310827924;
    static const unsigned __int64 muTemplateHash = 13661821701849532132;
    static const int miNumMembers = 2;

    float mfLowestDynamicResScalingFactor;
    eDynamicResScalingAggressiveness meDynamicResScalingAggressiveness;

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
