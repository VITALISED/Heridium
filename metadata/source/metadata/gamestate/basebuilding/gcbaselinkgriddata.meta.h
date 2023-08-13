#pragma once
#include "../../../../../../../pch.h"

class cGcBaseLinkGridConnectionData;

enum eDependsOnEnvironment
{
    EDependsOnEnvironment_None = 0,
    EDependsOnEnvironment_DayNight = 1,
    EDependsOnEnvironment_Storms = 2,
};

enum eDependsOnHotspots
{
    EDependsOnHotspots_None = 0,
    EDependsOnHotspots_Power = 1,
    EDependsOnHotspots_Mineral = 2,
    EDependsOnHotspots_Gas = 3,
};

class cGcBaseLinkGridData
{
    static const unsigned __int64 muNameHash = 0x3FBB55C99E667F9E;
    static const unsigned __int64 muTemplateHash = 0xE8F66D1290EEC0E7;
    static const int miNumMembers = 6;

    cGcBaseLinkGridConnectionData mConnection;
    int miRate;
    int miStorage;
    eDependsOnEnvironment meDependsOnEnvironment;
    eDependsOnHotspots meDependsOnHotspots;
    cTkDynamicArray<cGcBaseLinkGridConnectionDependency> maDependentConnections;

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
