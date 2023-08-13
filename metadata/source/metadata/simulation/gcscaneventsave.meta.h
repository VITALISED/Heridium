#pragma once
#include "pch.h"

class cGcBuildingClassification;
class cGcPlayerMissionParticipantType;

class cGcScanEventSave
{
public:
    static const unsigned __int64 muNameHash = 0x434C17159AF37265;
    static const unsigned __int64 muTemplateHash = 0xBB2142F8AFF05E7A;
    static const int miNumMembers = 10;

    int miTable;
    TkID<256> mEvent;
    unsigned __int64 mui64GalacticAddress;
    cTkSeed mBuildingSeed;
    cTkVector3 mBuildingLocation;
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
