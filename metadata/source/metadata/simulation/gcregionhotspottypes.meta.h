#pragma once
#include "../../../../pch.h"

enum eHotspotType
{
    EHotspotType_Power = 1,
    EHotspotType_Mineral1 = 2,
    EHotspotType_Mineral2 = 4,
    EHotspotType_Mineral3 = 8,
    EHotspotType_Gas1 = 16,
    EHotspotType_Gas2 = 32,
};

class cGcRegionHotspotTypes
{
public:
    static const unsigned __int64 muNameHash = 0x1B2443FC607CC2A;
    static const unsigned __int64 muTemplateHash = 0x2D148480DFB092DA;
    static const int miNumMembers = 1;

    eHotspotType meHotspotType;

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
