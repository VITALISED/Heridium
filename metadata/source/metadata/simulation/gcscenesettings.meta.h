#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/gamestate/gcplayerspawnstatedata.meta.h"

class cGcSceneSettings
{
public:
    static const unsigned __int64 muNameHash = 0xF75874C269CFFEA3;
    static const unsigned __int64 muTemplateHash = 0x3D244C4E181E581D;
    static const int miNumMembers = 12;

    cTkFixedString<128,char> macNextSettingFile;
    cTkFixedString<128,char> macSceneFile;
    cTkDynamicArray<cTkFixedString<128,char> > maPlanetSceneFiles;
    cTkFixedString<128,char> macSolarSystemFile;
    cTkFixedArray<cTkFixedString<128,char>, 5> maPlanetFiles;
    cTkDynamicArray<cTkFixedString<128,char> > maShipPreloadFiles;
    bool mbSpawnShip;
    bool mbSpawnInsideShip;
    cGcPlayerSpawnStateData mPlayerState;
    cTkDynamicArray<cTkClassPointer> maEvents;
    cTkDynamicArray<cTkClassPointer> maPostWarpEvents;
    TkID<128> mSpawnerOptionId;

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
