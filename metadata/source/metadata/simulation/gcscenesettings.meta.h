#pragma once
#include "../../../../../../pch.h"

class cGcPlayerSpawnStateData;

class cGcSceneSettings
{
    static const unsigned __int64 muNameHash = 0xF75874C269CFFEA3;
    static const unsigned __int64 muTemplateHash = 0x3D244C4E181E581D;
    static const int miNumMembers = 12;

    cTkFixedString<128,char> macNextSettingFile;
    cTkFixedString<128,char> macSceneFile;
    cTkDynamicArray<cTkFixedString<128,char> > maPlanetSceneFiles;
    cTkFixedString<128,char> macSolarSystemFile;
    cTkFixedArray<cTkFixedString<128,char> > maPlanetFiles;
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
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
