#pragma once
#include "../../../../../../pch.h"

class cGcSpaceshipTravelData
{
public:
    static const unsigned __int64 muNameHash = 0x88C0028CC5F47D1D;
    static const unsigned __int64 muTemplateHash = 0x6228F5D4E6A4CF1;
    static const int miNumMembers = 15;

    TkID<128> mId;
    float mfMinSpeed;
    float mfMaxSpeed;
    float mfBoostSpeed;
    float mfForce;
    float mfMinSpeedForce;
    float mfTurnMin;
    float mfTurnMax;
    float mfDirectionBrake;
    float mfMaxSpeedBrake;
    float mfFalloff;
    float mfRoll;
    float mfMinHeight;
    float mfAvoidTime;
    bool mbHovering;

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
