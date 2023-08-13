#pragma once
#include "pch.h"

class cGcVehicleType;
class cTkModelResource;

class cGcVehicleComponentData
{
public:
    static const unsigned __int64 muNameHash = 0x8847908A288010B2;
    static const unsigned __int64 muTemplateHash = 0x15D3F987A25D7FCE;
    static const int miNumMembers = 10;

    cGcVehicleType mClass;
    TkID<128> mVehicleType;
    cTkFixedString<128,char> macCockpit;
    float mfMaxHeadTurn;
    float mfMaxHeadPitchUp;
    float mfMaxHeadPitchDown;
    float mfMinTurretAngle;
    float mfFoVFixedDistance;
    int miBaseHealth;
    cTkModelResource mWheelModel;

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
