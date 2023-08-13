#pragma once

#include "../../../../../../../pch.h"
enum eOrigin
{
    EOrigin_SpaceStationInternals = 0,
    EOrigin_SpaceStationBack = 1,
    EOrigin_FreighterBattle = 2,
    EOrigin_Freighter = 3,
    EOrigin_FreighterHangar = 4,
    EOrigin_AtlasStation = 5,
    EOrigin_BlackHole = 6,
    EOrigin_Anomaly = 7,
};

class cGcCameraAmbientSpaceData
{
    static const unsigned __int64 muNameHash = 4260118096414970670;
    static const unsigned __int64 muTemplateHash = 11849635763110371486;
    static const int miNumMembers = 3;

    TkID<128> mAnimation;
    TkID<128> mDroneAnimation;
    eOrigin meOrigin;

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