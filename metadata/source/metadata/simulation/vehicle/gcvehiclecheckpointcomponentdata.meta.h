#pragma once
#include "../../../../../../../pch.h"

enum eCheckpointType
{
    ECheckpointType_Checkpoint = 0,
    ECheckpointType_Start = 1,
};

enum eRaceType
{
    ERaceType_Vehicle = 0,
    ERaceType_Spaceship = 1,
};

class cGcVehicleCheckpointComponentData
{
    static const unsigned __int64 muNameHash = 0xF8F75E88F695BE94;
    static const unsigned __int64 muTemplateHash = 0x998ECAC2D8278FE3;
    static const int miNumMembers = 3;

    eCheckpointType meCheckpointType;
    eRaceType meRaceType;
    float mfRadius;

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
