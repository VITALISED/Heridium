#pragma once

#include "../../../../../../pch.h"
class cGcBuildingClassification;
class cGcPlayerMissionParticipantType;

class cGcScanEventSave
{
    static const unsigned __int64 muNameHash = 4849276280332579429;
    static const unsigned __int64 muTemplateHash = 13484132395195063930;
    static const int miNumMembers = 10;

    int miTable;
    TkID<256> mEvent;
    unsigned __int64 mui64GalacticAddress;
    cTkSeed mBuildingSeed;
    cTkVector mBuildingLocation;
    cGcBuildingClassification mBuildingClass;
    float mfTime;
    TkID<128> mMissionID;
    unsigned __int64 mui64MissionSeed;
    cGcPlayerMissionParticipantType mParticipantType;

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