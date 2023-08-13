#pragma once

#include "../../../../../../../../pch.h"
class cGcSpaceshipTravelData
{
    static const unsigned __int64 muNameHash = 9853878788326456605;
    static const unsigned __int64 muTemplateHash = 442073344346049777;
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
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};