#pragma once
#include "../../../../../../../pch.h"

class cTkCurveType;

class cGcPlayerHazardData
{
    static const unsigned __int64 muNameHash = 0x18642126695741B5;
    static const unsigned __int64 muTemplateHash = 0x362521D640B1A7DE;
    static const int miNumMembers = 15;

    float mfProtectionInitialTime;
    cTkVector2 mProtectionTime;
    cTkVector2 mDamageRate;
    cTkVector2 mWoundRate;
    float mfRechargeInitialTime;
    float mfRechargeTime;
    TkID<128> mDamage;
    bool mbIncreases;
    cTkCurveType mDisplayCurve;
    float mfTriggerValue;
    float mfCapValue;
    float mfCriticalValue;
    float mfOutputMultiplier;
    float mfOutputMinAddition;
    float mfOutputMaxAddition;

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
