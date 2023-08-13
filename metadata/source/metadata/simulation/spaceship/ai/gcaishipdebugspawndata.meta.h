#pragma once

#include "../../../../../../../../pch.h"
class cGcAIShipDebugSpawnData
{
    static const unsigned __int64 muNameHash = 16116315614548249608;
    static const unsigned __int64 muTemplateHash = 964168361506862615;
    static const int miNumMembers = 13;

    cTkVector mPosition;
    cTkVector mFacing;
    cTkVector mUp;
    cTkVector mFlightDir;
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
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
