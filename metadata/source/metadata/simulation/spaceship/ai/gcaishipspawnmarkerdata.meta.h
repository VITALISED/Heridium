#pragma once
#include "pch.h"

class cTkTextureResource;

enum eShipsToMark
{
    EShipsToMark_None = 0,
    EShipsToMark_Leader = 1,
    EShipsToMark_All = 2,
};

class cGcAIShipSpawnMarkerData
{
public:
    static const unsigned __int64 muNameHash = 0xDB40771B3EB38336;
    static const unsigned __int64 muTemplateHash = 0x103B4E1E1547DE0E;
    static const int miNumMembers = 7;

    cTkTextureResource mMarkerIcon;
    TkID<256> mMarkerLabel;
    bool mbHideDuringCombat;
    float mfMinVisibleRange;
    float mfMaxVisibleRange;
    float mfMinAngleVisible;
    eShipsToMark meShipsToMark;

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
