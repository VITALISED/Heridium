#pragma once
#include "../../../../../../../pch.h"

enum eWaypointType
{
    EWaypointType_Move = 0,
    EWaypointType_MoveAlt = 1,
    EWaypointType_Idle = 2,
};

class cGcCreatureDebugWaypoint
{
    static const unsigned __int64 muNameHash = 0x4C03886F1A1C1DF7;
    static const unsigned __int64 muTemplateHash = 0xACAF195392879AE9;
    static const int miNumMembers = 4;

    cTkVector mPosition;
    eWaypointType meWaypointType;
    TkID<128> mAnim;
    float mfTime;

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
