#pragma once
#include "pch.h"

class cGcRobotLaserData
{
public:
    static const unsigned __int64 muNameHash = 0xAAC69095D4C233F5;
    static const unsigned __int64 muTemplateHash = 0x3588D6B453B06BE1;
    static const int miNumMembers = 10;

    TkID<128> mLaserID;
    float mfLaserSpringTime;
    float mfLaserActiveSpringTime;
    int miLaserMiningDamage;
    float mfLaserChargeTime;
    float mfLaserTime;
    float mfLaserLightChargeSize;
    float mfLaserLightAttackSize;
    cTkVector3 mLaserLightOffset;
    cTkColour mLaserColour;

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
