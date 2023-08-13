#pragma once

#include "../../../../../../../pch.h"
class cGcRobotLaserData
{
    static const unsigned __int64 muNameHash = 12305682005030482933;
    static const unsigned __int64 muTemplateHash = 3857569150829358049;
    static const int miNumMembers = 10;

    TkID<128> mLaserID;
    float mfLaserSpringTime;
    float mfLaserActiveSpringTime;
    int miLaserMiningDamage;
    float mfLaserChargeTime;
    float mfLaserTime;
    float mfLaserLightChargeSize;
    float mfLaserLightAttackSize;
    cTkVector mLaserLightOffset;
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
