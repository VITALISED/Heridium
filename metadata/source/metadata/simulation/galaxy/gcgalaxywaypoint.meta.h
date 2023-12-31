#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/source/metadata/gamestate/gcgalacticaddressdata.meta.h"
#include "../../../../../metadata/source/metadata/simulation/galaxy/gcgalaxywaypointtypes.meta.h"

class cGcGalaxyWaypoint
{
public:
    static const unsigned __int64 muNameHash = 0x562052A8272CC4A3;
    static const unsigned __int64 muTemplateHash = 0xD101B6A234B9F4A7;
    static const int miNumMembers = 3;

    cGcGalacticAddressData mAddress;
    cGcGalaxyWaypointTypes mType;
    TkID<256> mEventId;

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
