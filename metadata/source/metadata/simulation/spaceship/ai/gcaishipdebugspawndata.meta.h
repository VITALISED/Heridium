#pragma once
#include "../../../../../../pch.h"

class cGcAIShipDebugSpawnData
{
public:
    static const unsigned __int64 muNameHash = 0xDFA8A7A9DD3ACC08;
    static const unsigned __int64 muTemplateHash = 0xD616A0433497617;
    static const int miNumMembers = 13;

    cTkVector3 mPosition;
    cTkVector3 mFacing;
    cTkVector3 mUp;
    cTkVector3 mFlightDir;
    float mfSpeed;
    float mfIgnitionDelay;
    float mfTakeOffDelay;
    float mfHoverTime;
    float mfHoverHeight;
    float mfWarpOutTime;
    bool mbWingman;
    cTkFixedString<128,char> macSpecificModel;
    cTkSeed mSeed;

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
