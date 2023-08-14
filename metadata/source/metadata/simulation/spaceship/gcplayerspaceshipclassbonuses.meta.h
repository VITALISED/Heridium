#pragma once
#include "../../../../../pch.h"

class cGcPlayerSpaceshipClassBonuses
{
public:
    static const unsigned __int64 muNameHash = 0xFA78E3D1251A147D;
    static const unsigned __int64 muTemplateHash = 0x1A88CE9EA395D3BD;
    static const int miNumMembers = 12;

    float mfThrustForceMax;
    float mfThrustForceMin;
    float mfMaxSpeedMax;
    float mfMaxSpeedMin;
    float mfBoostMaxSpeedMax;
    float mfBoostMaxSpeedMin;
    float mfBoostingTurnDampMax;
    float mfBoostingTurnDampMin;
    float mfDirectionBrakeMin;
    float mfDirectionBrakeMax;
    float mfTurnStrengthMax;
    float mfTurnStrengthMin;

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
