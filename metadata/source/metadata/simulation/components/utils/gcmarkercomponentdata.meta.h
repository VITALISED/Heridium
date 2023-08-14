#pragma once
#include "../../../../../../pch.h"

#include "../../../../../../metadata/source/metadata/graphics/hud/gcgenericicontypes.meta.h"

enum eDisplayMode
{
    EDisplayMode_Always = 0,
    EDisplayMode_SpaceOnly = 1,
    EDisplayMode_PlanetOnly = 2,
};
#include "../../../../../../metadata/source/metadata/reality/gcrealitygameicons.meta.h"

class cGcMarkerComponentData
{
public:
    static const unsigned __int64 muNameHash = 0x499B7E363F46B54F;
    static const unsigned __int64 muTemplateHash = 0x9EE88E874E595E65;
    static const int miNumMembers = 7;

    cGcGenericIconTypes mIcon;
    float mfRadius;
    eDisplayMode meDisplayMode;
    bool mbShipScannable;
    TkID<256> mCustomName;
    bool mbUseCustomIcon;
    cGcRealityGameIcons mCustomIcon;

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
